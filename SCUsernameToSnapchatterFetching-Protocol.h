//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol SCUsernameToSnapchatterFetching
- (void)snapchatterWithUsername:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(SCSnapchatter *, NSError *))arg3;
- (void)snapchattersWithUsernames:(NSArray *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
@end

