//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMessageRetryPolicyExecutor;

@interface SCFriendsFeedAutoRetryer : NSObject
{
    SCMessageRetryPolicyExecutor *_retryPolicyExecutor;
}

- (void).cxx_destruct;
- (id)initWithFeedRetryer:(id)arg1 retrySignalAnnouncer:(id)arg2 experimentManager:(id)arg3;

@end
