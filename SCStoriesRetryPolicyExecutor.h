//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRetrySignalListener-Protocol.h"

@class NSDate, NSString, SCLazy, SCQueuePerformer;
@protocol SCStoriesRetryerProtocol;

@interface SCStoriesRetryPolicyExecutor : NSObject <SCRetrySignalListener>
{
    SCLazy *_retryPolicyLazy;
    id <SCStoriesRetryerProtocol> _storiesRetryer;
    long long _didRetryCount;
    SCQueuePerformer *_performer;
    NSDate *_lastAutoRetryTimestamp;
    NSDate *_lastPolicyResetTimestamp;
    _Bool _hasPendingRetry;
}

- (void).cxx_destruct;
- (void)_retryIfNeededWithRetrySignal:(unsigned long long)arg1;
- (void)didReceiveSignal:(unsigned long long)arg1;
- (id)initWithRetryPolicyLazy:(id)arg1 storiesRetryer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

