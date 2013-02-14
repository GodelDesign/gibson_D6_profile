core = 6.x
api = 2

; Makefile to help streamline the steps outlined in INSTALL.txt

; Tao theme
projects[tao][version] = 3.2
projects[tao][subdir] = contrib

; Twitter's Bootstrap
libraries[bootstrap][download][type] = "git"
libraries[bootstrap][download][url] = "git://github.com/twitter/bootstrap.git"
libraries[bootstrap][directory_name] = "bootstrap"
libraries[bootstrap][destination] = "themes/custom/godel_base_theme"

; LESS CSS
projects[less][version] = 2.7
projects[less][subdir] = contrib

/* Mixins within mixins don't pass function parameters to sub-mixins. Lessc.inc.php needs updating. - http://drupal.org/node/1286754 */
projects[less][patch][] = "http://drupal.org/files/recursive_mixins_inehritence-1286754-3.patch";