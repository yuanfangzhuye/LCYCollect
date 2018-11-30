//
// Created by Cedric Wu on 26/07/2017.
// Copyright (c) 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXIDs.h"
#import "PEXContext.h"

typedef NS_ENUM(NSInteger, PEXRequestMethod) {
    PexRequestMethodGet = 0,
    PexRequestMethodPost = 1,
    PexRequestMethodPut = 2,
    PexRequestMethodDelete = 3,
};

@interface PEXRequestDataBaseModel : NSObject {

}

@property (strong, nonatomic) NSString *requestUrl;

@property (strong, nonatomic) NSString *tid; /* tracking id */
@property (assign, nonatomic) int64_t utc; /* timeInterval */
@property (nonatomic, strong) NSString *source;
@property (strong, nonatomic) PEXIDs *ids;
@property (strong, nonatomic) PEXContext *context;
@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *version;
@property (assign, nonatomic) PEXRequestMethod method;

- (instancetype)initWith:(NSDictionary *)dict;

- (NSDictionary *)toDictionary;
- (NSString *)toJSON;

@end
