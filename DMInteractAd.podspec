
Pod::Spec.new do |s|
  s.name         = "DMInteractAd"
  s.version      = "1.0.0"
  s.summary      = "DMInteractAdFramework used on ios"
  s.description  = <<-DESC
豆盟互动广告 DMInteractAdFramework used on ios
                   DESC
  s.homepage     = "https://github.com/yunlgtao/DMInteractAd.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "taoyunlong" => "yunlg@163.com" }
  s.source       = { :git => "https://github.com/yunlgtao/DMInteractAd.git", :tag => "#{s.version}" }
  s.platform     = :ios
  s.ios.deployment_target = "9.0"
  #s.source_files  = "Classes", "Classes/**/*.{h,m}"
  #s.exclude_files = "Classes/Exclude"
  s.ios.vendored_frameworks = 'DMInteractAd/DMInteractAd.framework'
end
