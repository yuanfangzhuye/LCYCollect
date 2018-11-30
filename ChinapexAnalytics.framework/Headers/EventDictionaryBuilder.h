//
//  EventDictionaryBuilder.h
//  ChinapexAnalytics
//
//  Created by chinapex on 2018/7/9.
//  Copyright © 2018 Gary Chi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EventDictionaryBuilder : NSObject
+ (instancetype)createEventWithCategory:(NSString*)category action:(NSString*)action lable:(NSString*)lable value:(NSString*)value;

- (id)build;

@end
