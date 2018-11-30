//
//  PEXNetwork.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/23.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PEXBaseEntity.h"

@interface PEXNetwork : PEXBaseEntity

@property (strong, nonatomic) NSString *bluetooth;
@property (strong, nonatomic) NSString *carrier;
@property (strong, nonatomic) NSString *cellular;
@property (strong, nonatomic) NSString *wifi;

@end
