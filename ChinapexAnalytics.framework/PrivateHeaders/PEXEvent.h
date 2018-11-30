//
//  PEXEvent.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 07/08/2017.
//  Copyright © 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PEXTrait;
@interface PEXEvent : NSObject
//
+ (void)eventPostWithCategory:(nonnull NSString*)category action:(nonnull NSString*)action lable:(nullable NSString*)lable value:(nullable NSNumber*)value;


+ (void)eventPostWithName:(NSString *)eventName  eventType:(NSString *)eventType params:(NSMutableDictionary *)params;
+ (void)identifyPostWithTraits:(PEXTrait*)aTrait andUserId:(NSString*)userID;
+ (void)aliasPostWithUserId:(NSString*)userID;
@end
