//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue, SCRetriableRequest;

@protocol SCRetriableRequestManagerDelegate <NSObject>
- (void)submitRetryRequest:(id <SCRetriableRequest>)arg1 successQueue:(NSObject<OS_dispatch_queue> *)arg2 failureQueue:(NSObject<OS_dispatch_queue> *)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(long long))arg5;
@end

