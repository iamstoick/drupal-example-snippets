The native way of adding Javascript/jQuery.

```
jQuery(document).ready(function($){
  alert("I am awesome!");
});
```

But the above code will only execute on page load.
What about after AJAX request? For example you have a blog that load
its content via scroll. In this scenario the above code will not work.
That's where Drupal.behaviors is awesome. The Drupal.behaviors will be
called on every request including AJAX requests.

Drupal.behaviors example:

```
Drupal.behaviors.iamAwesome = {
  attach: function (context, settings) {
    // This get's ran on every request.
    // Look sorry Ma, I'm going to hide you.
    $('#useless-element').hide();

    // This will only get ran once.
    // jQuery.once is integrated into Drupal 7 core.
    context.once(function() {
      $('h1', this).addClass('.drupal-is-awesome');
    });
  },

  detach: function (context, settings) {
    // Do your js stuffs you want to do after your AJAX call.
  }
};
```

* iamAwesome: This is your namespace and should be unique.
* context: Contain the entire document and after an AJAX request will have all the newly loaded elements.
* settings: This contains information passed on to JavaScript via PHP, it is similar to accessing it via Drupal.settings.
* attach: This behavior function is called when new element is being added.
* detach: This behavior function is called when elements are removed.

You can also have multiple behaviors in once js file.

```
(function ($) {
  Drupal.behaviors.myNodebehavior = {
    attach: function (context, settings) {
      // Apply on all nodes.
    }
  }

  // You could add additional behaviors here.
  Drupal.behaviors.navigation = {
    attach: function (context, settings) {
      // Apply to navigation only.
    },
    detach: function (context, settings) { }
  };
}(jQuery));
```

So, if you have a script that creates new nodes here is how to apply the behavior
in that case.

```
var newNodes = $('<a href="#">Smelly</a> <a href="#">Beans</a>').appendTo('#grey-steaks');
Drupal.attachBehaviors(newNodes);
```

Credits:
--------

* [Ben Marshall](http://www.benmarshall.me/drupal-behaviors-introduction/)
* [AmazeeLabs](http://www.amazeelabs.com/en/blog/drupal-behaviors-quick-how)
