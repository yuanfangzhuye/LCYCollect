//
//  PEXManager.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/19.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXLogger.h"

#define APEX_SDK_SIGNOUT @"APEX_SDK_SIGNOUT"
@interface PEXManager : NSObject

@property (strong, nonatomic, readonly) NSString *token;

+ (instancetype)sharedInstance;

+ (instancetype)startAnalyseWithSignInUrl:(NSString*)signInUrl OutUrl:(NSString*)signOutUrl;
+ (void)setSigninToken:(NSString*)token;
+ (void)setSignOut;

- (void)setLoggerLevel:(LoggerLevel)level;
- (void)send:(id)model;

#pragma mark - PEXApp About
- (void)setAppName:(NSString *)appName version:(NSString *)appVersion build:(NSString *)appBuild;

#pragma mark - PEXAddress About
- (void)setCity:(NSString *)city country:(NSString *)country province:(NSString *)province street:(NSString *)street;

#pragma mark - PEXLocation About
- (void)setCity:(NSString *)city country:(NSString *)country region:(NSString *)region latitude:(double)lat longitude:(double)lng;

@end
