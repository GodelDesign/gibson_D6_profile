It is very important that the first time you use gibson_theme that you read INSTALL.txt!

Notes:

* Bootstrap is a LESS library provided by Twitter, in its default form it uses the comma separated syntax for arguments passed to LESS mixins, but lessphp (the php parser used by the drupal less module) uses a semicolon separated syntax for arguments. To get Bootstrap working, we've had to manually replace commas with semicolons in the library where appropriate, but we're still not 100% certain that we got every single one or that we weren't over-zealous in places. If you're trying out a new mixin from bootstrap and can't get it to work then one of the first things to check (after your own code) is the syntax in the library.

Usage:

* The online documentation for bootstrap is not bad - http://twitter.github.com/bootstrap/

* We're not using the default variables.less provided by bootstrap as it is a bit limiting, instead everything is split across a few different files in "css/var/":
  - colours.less for hex codes.
  - layout.less for heights and widths of page elements and regions.
  - images.less for the names of background images, icons and sprites. The path is not necessary but the file type extension is.
  - type.less for sizes of font sizes and line heights. Using "once off", or em-based font sizes rather than values set explicitly in this file is strongly discouraged.
  
These files have default variables inside them and ignoring or not setting these can cause some Bootstrap functionality to break to various extents. Losing purple buttons might not be the end of the world, but failing to set layout variables can completely disable the CSS grid functionality which is a bit worse.

Mixins Quick Reference

**Coming "Soon" **

Please help me flesh this out, it just involves reading through patterns.less and mixins.less in bootstrap, and mixins.less in css/patterns, trying them out and then documenting them here! really not hard.