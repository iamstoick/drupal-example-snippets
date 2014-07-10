```
(function ($) {
  // Add your behavior.
  Drupal.behaviors.myBehavior = {
    // This behavior function is called when new element is being added.
    attach: function(context, settings) {
      // Tell JQuery that there's an Ajax event first.
      $('.mydiv').ajaxComplete(function() {
        // Whatever code you need to execute.
        $(this).remove();
      });
    }
  }
})(jQuery);
```
