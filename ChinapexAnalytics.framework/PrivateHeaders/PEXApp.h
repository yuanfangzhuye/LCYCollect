//
//  PEXApp.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/18.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PEXBaseEntity.h"

@interface PEXApp : PEXBaseEntity

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *version;
@property (strong, nonatomic) NSString *build;

@end
