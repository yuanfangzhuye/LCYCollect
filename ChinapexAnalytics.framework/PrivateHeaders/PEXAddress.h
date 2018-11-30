//
// Created by Cedric Wu on 2017/7/23.
// Copyright (c) 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PEXBaseEntity.h"



@interface PEXAddress : PEXBaseEntity

@property (strong, nonatomic) NSString *city;
@property (strong, nonatomic) NSString *country;
@property (strong, nonatomic) NSString *province;
@property (strong, nonatomic) NSString *street;

@end
