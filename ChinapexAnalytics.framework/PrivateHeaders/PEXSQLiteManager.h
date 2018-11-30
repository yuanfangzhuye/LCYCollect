//
//  PEXSQLiteManager.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 27/07/2017.
//  Copyright © 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PEXSQLiteManager : NSObject

+ (instancetype)sharedInstance;

- (NSString *)getDatabaseName;

- (NSError *)openOrCreateDatabase:(NSString *)dbName;
- (NSArray *)query:(NSString *)sql error:(NSError **)error;
- (int64_t)update:(NSString *)sql with:(NSArray *)params error:(NSError **)error;
- (NSError *)closeDatabase;
- (int64_t)getLastInsertRowID:(NSError **)error;


@end
