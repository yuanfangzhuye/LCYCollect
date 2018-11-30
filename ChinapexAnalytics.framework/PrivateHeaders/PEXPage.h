//
//  PEXPage.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/23.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PEXBaseEntity.h"

@interface PEXPage : PEXBaseEntity
@property (strong, nonatomic) NSString *path;
@property (strong, nonatomic) NSString *referrer;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *url;
@end
