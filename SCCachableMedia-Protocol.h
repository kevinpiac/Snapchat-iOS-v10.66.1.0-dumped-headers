//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSObject;
@protocol OS_dispatch_queue;

@protocol SCCachableMedia
- (void)dataFromCacheCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(void (^)(NSString *, NSData *))arg2;
- (void)saveDataToCache:(NSData *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSString *))arg3;
@end

