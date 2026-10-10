Pod::Spec.new do |spec|
    spec.name                     = 'planetlink-release'
    spec.version                  = '0.0.1'
    spec.homepage                 = 'https://github.com/uakihir0/planetlink'
    spec.source                   = { :http=> ''}
    spec.authors                  = 'Akihiro Urushihara'
    spec.license                  = 'MIT'
    spec.summary                  = 'Planetlink is multi social media client for Kotlin Multiplatform.'
    spec.vendored_frameworks      = 'release/planetlink.xcframework'
    spec.libraries                = 'c++'
end
