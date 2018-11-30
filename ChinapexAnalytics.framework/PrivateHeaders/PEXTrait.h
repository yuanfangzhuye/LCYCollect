//
// Created by Cedric Wu on 2017/7/23.
// Copyright (c) 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXAddress.h"

#import "PEXBaseEntity.h"

@interface PEXTrait : PEXBaseEntity

@property (strong, nonatomic) PEXAddress *address;
@property (nonatomic) double age;
@property (strong, nonatomic) NSString *birthday;
//@property (strong, nonatomic) NSString *description;
@property (strong, nonatomic) NSString *email;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *gender;
@property (strong, nonatomic) NSString *phone;

@end
