//
// Created by Cedric Wu on 2017/7/23.
// Copyright (c) 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXApp.h"
#import "PEXDevice.h"
#import "PEXLocation.h"
#import "PEXNetwork.h"
#import "PEXOperatingSystem.h"
#import "PEXPage.h"
#import "PEXScreen.h"

#import "PEXBaseEntity.h"

@interface PEXContext : PEXBaseEntity

@property (strong, nonatomic) PEXApp *app;
@property (strong, nonatomic) PEXDevice *device;
@property (strong, nonatomic) NSString *ip;
@property (strong, nonatomic) PEXLocation *location;
@property (strong, nonatomic) PEXNetwork *network;
@property (strong, nonatomic) PEXOperatingSystem *os;
@property (strong, nonatomic) PEXPage *page;
@property (strong, nonatomic) PEXScreen *screen;
@property (strong, nonatomic) NSString *userAgent;

@end
