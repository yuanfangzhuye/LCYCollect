//
// Created by Cedric Wu on 26/07/2017.
// Copyright (c) 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXRequestDataBaseModel.h"

@interface PEXRequestDataEventModel : PEXRequestDataBaseModel

@property (strong, nonatomic) NSString *event;
@property (strong, nonatomic) NSString *eventtype;
@property (strong, nonatomic) NSMutableDictionary *properties;
@property (nonatomic, copy) NSString *source;
@end
