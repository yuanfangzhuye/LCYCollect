//
//  PEXBaseEntity.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 25/07/2017.
//  Copyright © 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+Urlencode.h"

@interface PEXBaseEntity : NSObject

- (instancetype)initWith:(id)dict;

- (NSString *)toJSON;
- (NSDictionary *)toDictionary;

@end
