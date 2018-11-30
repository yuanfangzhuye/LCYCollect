//
//  PEXOperatingSystem.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/23.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PEXBaseEntity.h"

@interface PEXOperatingSystem : PEXBaseEntity

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *version;

@end
