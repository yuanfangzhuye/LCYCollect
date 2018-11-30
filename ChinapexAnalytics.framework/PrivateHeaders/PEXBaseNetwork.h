//
//  PEXBaseNetwork.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/20.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^callBackSuccess)(NSURLResponse *response);
typedef void(^callBackFailed)(NSError *connErr, NSURLResponse *response);

@interface PEXBaseNetwork : NSObject <NSURLConnectionDataDelegate>
singleH(Instance);
- (NSURLRequest *)get:(NSString *)urlString params:(NSDictionary *)params callBackSuccess:(callBackSuccess)success callBackFail:(callBackFailed)failed;
- (NSURLRequest *)post:(NSString *)urlString params:(id)params callBackSuccess:(callBackSuccess)success callBackFail:(callBackFailed)failed;

@end
