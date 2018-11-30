//
// Created by Cedric Wu on 26/07/2017.
// Copyright (c) 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXRequestDataBaseModel.h"

@interface PEXRequestDataAliasModel : PEXRequestDataBaseModel

@property (strong, nonatomic) NSString *userid;
@property (strong, nonatomic) NSString *idfa;
@property (strong, nonatomic) NSString *openidfa;
@property (strong, nonatomic) NSString *idfv;
@property (strong, nonatomic) NSString *fingerprint;

@end