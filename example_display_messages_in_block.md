In template.php
```
function THEME_preprocess_block(&$variables) {
 $variables['messages'] = theme('status_messages');
}
```

In block.tpl.php
```
<?php print $messages; ?>
```
