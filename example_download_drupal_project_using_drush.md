To download Drupal project using Drush, be sure to have Drush installed in your machine.
If you're in Linux, just follow this guide.

```
$ sudo apt-get install php-pear
$ sudo pear channel-discover pear.drush.org
$ sudo pear install drush/drush
// Use sudo to download Drush library. No need to use sudo in normal operation.
$ sudo drush
// Make the Drush cache writable.
$ sudo chmod 777 ~/.drush/cache
// Now you can use Drush without sudo and permission problem.
$ drush
```

Examples:
---------
To download Views module.

`$ drush dl views`

To download Zen theme.

`$ drush dl zen`

To specify the location of the downloaded module.

`$ drush dl views --destination=sites/all/modules/contrib`

To select specific version before downloading.

`$ drush dl views --select`
