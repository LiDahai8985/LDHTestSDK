//
//  LDHPayManager.h
//  LDHPaySDK
//
//  Created by LiDaHai on 2020/2/28.
//  Copyright © 2020 LiDaHai. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDHPayManager : NSObject

+ (void)dh_registWeChatPayWithApp:(NSString *)appid;

+ (BOOL)dh_openWeChatApp;

+ (void)dh_weixinPayWithRequestInfo:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
