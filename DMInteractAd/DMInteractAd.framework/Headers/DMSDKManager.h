//
//  DMSDKManager.h
//  DMInteractVideoAd
//
//  Created by yunlg on 2019/3/18.
//  Copyright © 2019 yunlg. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DMSDKManager : NSObject

/**
 
  sdk-version-1.2.0

 */


/**
 在请求广告前，注册且已经申请的App key
 @param appKey 标识App的唯一标识
 */

+ (void)setAppKey:(NSString *)appKey;


/**
 设置 urlSchemes 与 appstore 地址用于广告分享出去的链接可以打开此 app 或者打开appstore 下载页面
 设置此参数可以提高 app 的曝光率
 @param iosScheme 可以打开此 app 的 urlScheme，格式为 scheme://
 @param iosAppstoreUrl 此 app 的appstore 的地址
 @param androidScheme 安卓拼接好的 scheme , 格式为 schemedemo://doumob.com/test/
 @param androidAppstoreUrl app 的安卓市场下载地址
 */

+ (void)setIosURLScheme:(NSString *)iosScheme iosAppstoreUrl:(NSString *)iosAppstoreUrl androidScheme:(NSString *)androidScheme androidAppstoreUrl:(NSString *)androidAppstoreUrl;


@end

NS_ASSUME_NONNULL_END
