//
//  PEXNetworkManager.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/21.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXBaseNetwork.h"

@class PEXRequestDataBaseModel;

@interface PEXNetworkManager : NSObject
@property (nonatomic, strong) NSString *signInUrl; /**<  */
@property (nonatomic, strong) NSString *signOutUrl; /**<  */

+ (instancetype)sharedInstance;

+ (NSString *)getRequestUrl:(NSString *)path;
//+ (NSString*)getRequestUrlFromConfig;

//单个上传
- (void)sendModelToServer:(PEXRequestDataBaseModel *)model callBackSuccess:(callBackSuccess)success callBackFail:(callBackFailed)faild;
//打包上传
- (void)sendModelsToServer:(NSArray<PEXRequestDataBaseModel*> *)models callBackSuccess:(callBackSuccess)success callBackFail:(callBackFailed)failed;

+ (void)setSignInUrl:(NSString*)url;
+ (void)setSignOutUrl:(NSString*)url;
@end
