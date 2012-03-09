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

projects[context][version] = "3.0"
projects[context][subdir] = "contrib"

projects[panels][version] = "3.10"
projects[panels][subdir] = "contrib"

projects[ds][version] = "2.3"
projects[ds][subdir] = "contrib"

projects[nd][version] = "2.9"
projects[nd][subdir] = "contrib"

projects[nd_contrib][version] = "2.9"
projects[nd_contrib][subdir] = "contrib"

projects[uuid][version] = "1.0-beta2"
projects[uuid][subdir] = "contrib"

projects[uuid_features][version] = "1.0-alpha1"
projects[uuid_features][subdir] = "contrib"


; Dev Snapshot

; projects[example][download][type] = "git"
; projects[example][download][url] = "http://git.drupal.org/project/example.git"
; projects[example][download][revision] = "md5-hash-goes-here"
; projects[example][subdir] = contrib