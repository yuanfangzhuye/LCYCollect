//
//  NSString+Urlencode.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 07/08/2017.
//  Copyright © 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Urlencode)

- (NSString *)pex_urlencode;
- (NSDictionary *)pex_toDictionary;

@end
