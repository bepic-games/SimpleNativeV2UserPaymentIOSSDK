Pod::Spec.new do |spec|
  spec.name = "SimpleNativeV2UserPaymentIOSSDK"
  spec.version="0.1.1"
  spec.summary= "Simple SDK for include UserPayment sdk"
  spec.description= <<-DESC
  Simple SDK for UserPayment sdk , please includ the core sdk more
  DESC
  spec.homepage= 'https://github.com/bepic-games/SimpleNativeV2UserPaymentIOSSDK'
  spec.license= { :type => 'MIT', :file => 'LICENSE' }
  spec.author = { "yilang" => "yilang@bepic.cc" }
  spec.ios.deployment_target = "10.0"
  spec.source = { :git => "https://github.com/bepic-games/SimpleNativeV2UserPaymentIOSSDK.git", :tag => "#{spec.version}" }
  spec.swift_version = '5.0'
  spec.source_files= 'SimpleNativeV2UserPaymentIOSSDK/*.{framework}/Headers/*.h'
  spec.vendored_frameworks = 'SimpleNativeV2UserPaymentIOSSDK/*.{framework}'
  spec.public_header_files = 'SimpleNativeV2UserPaymentIOSSDK/*.{framework}/Headers/*.h'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64 armv7 armv7s ' }
  spec.dependency 'FBSDKLoginKit', '11.2.1'
end
