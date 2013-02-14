core = 6.x
api = 2

; Including everything in here will provide a solid foundation for any new D6 project

; Need this or we won't be able to build the profile at all
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-6.x-2.0-beta2.tar.gz"

; Godel starter theme

; projects[gibson_theme][type] = theme
; projects[gibson_theme][download][type] = "git"
; projects[gibson_theme][download][url] = "git://github.com/godel-design/gibson_theme.git"
; projects[gibson_theme][subdir] = "custom"

; Template Features

 ; projects[template_d6_global][type] = module
 ; projects[template_d6_global][download][type] = "git"
 ; projects[template_d6_global][download][url] = "git://github.com/godel-design/template_d6_global.git"
 ; projects[template_d6_global][subdir] = "custom"

 ; projects[template_d6_blog][type] = module
 ; projects[template_d6_blog][download][type] = "git"
 ; projects[template_d6_blog][download][url] = "git://github.com/godel-design/template_d6_blog.git"
 ; projects[template_d6_blog][subdir] = "custom"

; Modules used in at least 95% of all projects that aren't already part of BOA

; diff http://drupal.org/project/diff
projects[diff][version] = 2.3
projects[diff][subdir] = contrib

; admin module http://drupal.org/project/admin
projects[admin][version] = 2.0
projects[admin][subdir] = contrib

; better formats module http://drupal.org/project/better_formats
projects[better_formats][version] = 1.2
projects[better_formats][subdir] = contrib

; content module - http://drupal.org/project/cck
projects[cck][version] = 2.9
projects[cck][subdir] = contrib

; ctools module - http://drupal.org/project/ctools
projects[ctools][version] = 1.8
projects[ctools][subdir] = contrib

; filefield - http://drupal.org/project/filefield
; extends cck to allow uploading of files
projects[filefield][version] = 3.10
projects[filefield][subdir] = contrib

; filefield_paths
; uses pathauto and transliteration to clean up path names in filefield
projects[filefield_paths][download][type] = git
projects[filefield_paths][download][url] = http://git.drupal.org/project/filefield_paths.git
projects[filefield_paths][download][revision] = "82ab88d5cacbd1d9f1269343b9d98daf14a8d200"
projects[filefield_paths][subdir] = contrib
projects[filefield_paths][patch][] = "http://drupal.org/files/filefield_paths-1195374-6.patch"

; filefield_sources
projects[filefield_sources][version] = 1.4
projects[filefield_sources][subdir] = contrib

; google_analytics
; easy embedding and some advanced features for google analytics including local caching of tracking snippet
projects[google_analytics][version] = 3.3
projects[google_analytics][subdir] = contrib

; imageapi
; used mostly by imagecache
projects[imageapi][version] = 1.10
projects[imageapi][subdir] = contrib

; imagecache
; generates cropped and scaled images then caches them
projects[imagecache][version] = 2.0-beta12
projects[imagecache][subdir] = contrib

; imagefield
; extends cck & filefield to allow image uploading
projects[imagefield][version] = 3.10
projects[imagefield][subdir] = contrib

; jquery_ui
; includes jquery_ui but needs an external library to function
projects[jquery_ui][version] = 1.5
projects[jquery_ui][subdir] = contrib

libraries[jquery_ui][download][type] = "get"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery-ui-1.7.3.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"

; jquery_update
; updates jquery to 3.12
projects[jquery_update][version] = 2.0-alpha1
projects[jquery_update][subdir] = contrib

; menutrails
; applies active states to menu items based on node type and taxonomy terms
projects[menutrails][version] = 1.1
projects[menutrails][subdir] = contrib

; menu_block
; creates blocks out of menus
projects[menu_block][version] = 2.4
projects[menu_block][subdir] = contrib

; nodeformcols
; makes node add/edit forms look much nicer
projects[nodeformcols][version] = 1.6
projects[nodeformcols][subdir] = contrib

; pathauto
projects[pathauto][version] = 1.6
projects[pathauto][subdir] = contrib

; smartcrop
; improves imagecache cropping algorithm by centering on high entropy areas of images
projects[smartcrop][version] = 1.0-beta1
projects[smartcrop][subdir] = contrib

; token
projects[token][version] = 1.18
projects[token][subdir] = contrib

; transliteration
projects[transliteration][version] = 3.0
projects[transliteration][subdir] = contrib

; views
projects[views][download][type] = "git"
projects[views][download][url] = "http://git.drupal.org/project/views.git"
projects[views][download][revision] = "5fe7ef18db507077e1728d7885f7e6c453633812"
projects[views][subdir] = contrib

; wysiwyg + crap to make wysiwyg settings exportable
projects[wysiwyg][version] = 2.4
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][patch][] = "http://drupal.org/files/wysiwyg-exportables-and-features-support-for-6.x-1060846-31.patch"

projects[input_formats][version] = 1.0-beta6
projects[input_formats][subdir] = contrib

projects[exportables][download][type] = "git"
projects[exportables][download][url] = "http://git.drupal.org/project/exportables.git"
projects[exportables][download][revision] = "ba79e9a04bb399a237770d362a05992b756f5346"
projects[exportables][subdir] = contrib

; google analytics
projects[google_analytics][version] = "3.3"
projects[google_analytics][subdir] = "contrib"

; strongarm
projects[strongarm][version] = "2.1"
projects[strongarm][subdir] = "contrib"

; webform
projects[webform][version] = "3.15"
projects[webform][subdir] = "contrib"

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://downloads.sourceforge.net/project/tinymce/TinyMCE/3.2.7/tinymce_3_2_7.zip"
libraries[tinymce][directory_name] = "tinymce"

; rubik
projects[rubik][version] = 3.0-beta2
projects[rubik][subdir] = contrib

; tao
projects[tao][version] = 3.2
projects[tao][subdir] = contrib

; features
projects[features][version] = "1.2"
projects[features][subdir] = "contrib"
projects[features][patch][] = "http://drupal.org/files/1204652_features_module_name.patch"