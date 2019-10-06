//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, SCQueuePerformer;

@interface SCFailedAttemptRecovery : NSObject <NSCoding>
{
    SCQueuePerformer *_performer;
    unsigned long long _retriesCount;
    double _attemptTimeout;
    unsigned long long _maxRetriesCount;
    double _sleepTimeout;
    NSDate *_lastMaxAttemptsTimestamp;
}

- (void).cxx_destruct;
- (void)_createPerformer;
@property(readonly) double attemptTimeout; // @synthesize attemptTimeout=_attemptTimeout;
- (void)encodeWithCoder:(id)arg1;
- (void)failWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAttemptTimeout:(double)arg1 maxRetriesCount:(unsigned long long)arg2 sleepTimeout:(double)arg3;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *lastMaxAttemptsTimestamp; // @synthesize lastMaxAttemptsTimestamp=_lastMaxAttemptsTimestamp;
@property(readonly) unsigned long long maxRetriesCount; // @synthesize maxRetriesCount=_maxRetriesCount;
@property(readonly) double sleepTimeout; // @synthesize sleepTimeout=_sleepTimeout;

@end

