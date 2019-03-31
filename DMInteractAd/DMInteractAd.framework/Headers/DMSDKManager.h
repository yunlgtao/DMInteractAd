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
 在请求广告前，注册且已经申请的App key
 @param appKey 标识App的唯一标识
 */

+ (void)setAppKey:(NSString *)appKey;


@end

NS_ASSUME_NONNULL_END
