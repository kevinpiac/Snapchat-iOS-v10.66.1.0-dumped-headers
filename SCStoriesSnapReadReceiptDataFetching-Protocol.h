//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@protocol SCStoriesSnapReadReceiptDataFetching <NSObject>
- (void)fetchAllReadReceiptsWithCompletion:(void (^)(NSArray *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 context:(unsigned long long)arg3;
@end

