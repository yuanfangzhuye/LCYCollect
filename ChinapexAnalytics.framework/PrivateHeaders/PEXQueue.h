//
//  PEXQueue.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 25/07/2017.
//  Copyright © 2017 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEXRequestDataBaseModel.h"

@interface PEXQueue : NSObject


/**
 触发上传的占用条件，单位为kb
 */
@property (assign, nonatomic) double kTriggerUploadSize;


/**
 触发上传的时间条件，单位为秒
 */
@property (assign, nonatomic) double kTriggerUploadTime;

+ (instancetype)sharedInstance;

- (void)addToQueue:(PEXRequestDataBaseModel *)model;
- (void)start;
- (void)stop;


/**
 把队列存入数据库，然后清空队列
 */
- (void)saveQueueToDatabaseCompleteHandler:(dispatch_block_t)handler;
- (NSInteger)queueSize;

/**
 从数据库的表中读出队列
 */
- (void)loadQueueFromTable:(NSString *)trackingID;


/**
 清空数据库当前表
 */
- (void)clearDatabase;

@end
