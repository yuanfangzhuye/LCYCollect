//
//  PEXIDs.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/21.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PEXBaseEntity.h"

@interface PEXIDs : PEXBaseEntity

@property (strong, nonatomic) NSString *idfa;
@property (strong, nonatomic) NSString *idfv;
@property (strong, nonatomic) NSString *userid;

@end
