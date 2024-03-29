//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, SCMapMyStatus;
@protocol OS_dispatch_queue;

@protocol SCMapStatusRPCService <NSObject>
- (void)deleteMyStatus:(SCMapMyStatus *)arg1 completion:(void (^)(NSArray *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)fetchExploreItemsWithCompletion:(void (^)(NSError *, NSArray *, double))arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)fetchMyStatusesWithCompletion:(void (^)(NSError *, NSArray *, double))arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)submitViewEvents:(NSArray *)arg1;
@end

