//
//  PEXLocationn.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/18.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PEXBaseEntity.h"

@interface PEXLocation : PEXBaseEntity

@property (strong, nonatomic) NSString *city;
@property (strong, nonatomic) NSString *country;
@property (strong, nonatomic) NSString *region;
@property (assign) double latitude;
@property (assign) double longitude;

@end
