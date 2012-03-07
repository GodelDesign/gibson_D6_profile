core = 6.x
api = 2

; FYI - the name of this file needs to be the same as the project name as it is referenced in the stub
; or it won't be discovered!

; First include the base makefile

includes[base] = base.make

; Extend the build below here

; --Themes--

; projects[example][type] = theme
; projects[example][download][type] = "git"
; projects[example][download][url] = "git://github.com/godel-design/gibson_theme.git"
; projects[example][subdir] = "custom"

; --Custom Modules--

; projects[example][type] = module
; projects[example][download][type] = "git"
; projects[example][download][url] = "git://github.com/godel-design/gibson_theme.git"
; projects[example][subdir] = "custom"

; --Patches--

; projects[example][patch][] = "http://drupal.org/files/123456_example_3.patch"

; --Libraries--

; libraries[example][download][type] = "get"
; libraries[example][download][url] = "http://example.com/example.tar.gz"
; libraries[example][directory_name] = "example"
; libraries[example][destination] = "modules/contrib/example"

; --Contrib--

; Stable Version

; projects[example][version] = "3.9"
; projects[example][subdir] = "contrib"

; Dev Snapshot

; projects[example][download][type] = "git"
; projects[example][download][url] = "http://git.drupal.org/project/example.git"
; projects[example][download][revision] = "md5-hash-goes-here"
; projects[example][subdir] = contrib