//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCALoadMessage : SCAUserTrackedEvent
{
    NSNumber *userPresentStartTimestamp;
    NSNumber *loadMessageStartTimestamp;
    NSNumber *loadMessageEndTimestamp;
    long long loadMessageAttemptType;
    long long loadMessageStatus;
    long long failedStep;
    NSString *messageId;
    NSString *mediaId;
    NSString *loadMessageAttemptId;
    NSString *messageType;
    NSString *mediaType;
    NSString *stepLatenciesMs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFailedStep;
- (id)getLoadMessageAttemptId;
- (long long)getLoadMessageAttemptType;
- (long long)getLoadMessageEndTimestamp;
- (long long)getLoadMessageStartTimestamp;
- (long long)getLoadMessageStatus;
- (id)getMediaId;
- (id)getMediaType;
- (id)getMessageId;
- (id)getMessageType;
- (double)getPerUserSamplingRate;
- (id)getStepLatenciesMs;
- (long long)getUserPresentStartTimestamp;
- (id)init;
- (void)setFailedStep:(long long)arg1;
- (void)setLoadMessageAttemptId:(id)arg1;
- (void)setLoadMessageAttemptType:(long long)arg1;
- (void)setLoadMessageEndTimestamp:(long long)arg1;
- (void)setLoadMessageStartTimestamp:(long long)arg1;
- (void)setLoadMessageStatus:(long long)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageType:(id)arg1;
- (void)setStepLatenciesMs:(id)arg1;
- (void)setUserPresentStartTimestamp:(long long)arg1;

@end

