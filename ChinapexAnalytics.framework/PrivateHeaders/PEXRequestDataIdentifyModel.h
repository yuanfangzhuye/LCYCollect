//
// Created by Cedric Wu on 26/07/2017.
// Copyright (c) 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXRequestDataBaseModel.h"
#import "PEXTrait.h"

@interface PEXRequestDataIdentifyModel : PEXRequestDataBaseModel

@property (strong, nonatomic) PEXTrait *traits;
@property (strong, nonatomic) NSString *userid;

@end