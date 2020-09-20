#
# Be sure to run `pod lib lint APod.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#
#pod trunk register native.jong@gmail.com 'Native Jong' --description='Native Jong'
#pod trunk push BPod.podspec --allow-warnings
#pod trunk push  Native-Jong-BPod.podspec --allow-warnings
#pod lib lint BPod.podspec
#https://cocoapods.org/pods/Native-Jong-BPod

Pod::Spec.new do |s|
    s.name             = "CPod"
    s.version          = "1.1.1"
    s.summary          = "The open source fonts for Artsy apps + UIFont categories."
    s.homepage         = "https://github.com/artsy/Artsy-OSSUIFonts"
    s.license          = 'Code is MIT, then custom font licenses.'
    s.author           = { "Orta" => "native.jong@gmail.com" }
    s.source           = { :git => "https://github.com/jalajoninc/BPod.git", :tag => s.version }
    s.social_media_url = 'https://twitter.com/artsy'

    s.platform     = :ios, '7.0'
    s.requires_arc = true

    #s.source_files = 'Pod/Classes'
    #s.resources = 'Pod/Assets/*'
    #s.source_files = '*'
    #s.resources = '*.framework'
    
    #s.public_header_files = "IHome.framework/Headers/*.h"
    #s.source_files = "IHome.framework/Headers/*.h"
    #s.vendored_frameworks = "IHome.framework"
    
    s.public_header_files = "iHome.framework/Headers/*.h"
    s.source_files = "iHome.framework/Headers/*.h"
    s.vendored_frameworks = "iHome.framework"

    s.frameworks = 'UIKit', 'CoreText'
    s.module_name = 'CPod'
end
