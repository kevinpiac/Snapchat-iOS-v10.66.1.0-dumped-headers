//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCCloudSyncRetry : NSObject
{
    NSMutableDictionary *_retryForRequestID;
}

- (void).cxx_destruct;
- (void)increaseRetryCountForRequestID:(id)arg1;
- (id)init;
- (void)removeForRequestID:(id)arg1;
- (long long)retryCountForRequestID:(id)arg1;

@end

