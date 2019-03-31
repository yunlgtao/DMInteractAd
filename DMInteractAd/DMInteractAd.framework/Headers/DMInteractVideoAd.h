//
//  DMInteractVideoAd.h
//  DMInteractVideoAd
//
//  Created by yunlg on 2019/3/18.
//  Copyright © 2019 yunlg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DMInteractVideoAd : NSObject

/**
 加载显示互动广告
 @param rootViewController 广告显示的 ViewController 必传
 @param adSpaceKey 平台申请的adSpaceKey
 */
+ (void)showAdFromRootViewController:(UIViewController *)rootViewController adSpaceKey:(NSString *)adSpaceKey;


@end

NS_ASSUME_NONNULL_END
