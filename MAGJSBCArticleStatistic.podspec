#
# Be sure to run `pod lib lint MAGJSBCArticleStatistic.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MAGJSBCArticleStatistic'
  s.version          = '1.0.0'
  s.summary          = 'MAGJSBCArticleStatistic'
  s.description      = <<-DESC
该sdk为各省融媒体要求地方各县市融媒体app接入埋点以及内容数据的API接口对接，用于获取客户端用户数据和内容数据.
                       DESC

  s.homepage         = 'https://www.yuque.com/docs/share/14b11b4a-30c1-4bd7-85f9-470214d6b461'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'lixueping' => '2876094471@qq.com' }
  s.source           = { :git => 'https://github.com/lyeah-ios/MAGJSBCArticleStatistic.git', :tag => s.version.to_s }
  s.platform     = :ios
  s.ios.deployment_target = '9.0'

  s.requires_arc = true

  s.ios.vendored_frameworks = 'MAGJSBCArticleStatistic/JSBCArticleStatisticFramework.framework'
  s.frameworks = 'UIKit', 'Foundation', 'CoreTelephony', 'CoreLocation', 'AdSupport'
  
end
