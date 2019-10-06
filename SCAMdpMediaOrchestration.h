//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAMdpMediaOrchestration : SCAUserTrackedEvent
{
    NSNumber *mediaSize;
    NSNumber *uploadQualityLevel;
    NSNumber *totalLatencyMs;
    long long featureSource;
    long long triggerType;
    long long mediaOrchestrationResult;
    long long failedStep;
    NSString *mediaId;
    NSString *fkSendMessageAttemptId;
    NSString *mediaOrchestrationAttemptId;
    NSString *mediaType;
    NSString *mediaResolutionPostTranscoding;
    NSString *stepLatenciesMs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFailedStep;
- (long long)getFeatureSource;
- (id)getFkSendMessageAttemptId;
- (id)getMediaId;
- (id)getMediaOrchestrationAttemptId;
- (long long)getMediaOrchestrationResult;
- (id)getMediaResolutionPostTranscoding;
- (long long)getMediaSize;
- (id)getMediaType;
- (double)getPerUserSamplingRate;
- (id)getStepLatenciesMs;
- (long long)getTotalLatencyMs;
- (long long)getTriggerType;
- (long long)getUploadQualityLevel;
- (id)init;
- (void)setFailedStep:(long long)arg1;
- (void)setFeatureSource:(long long)arg1;
- (void)setFkSendMessageAttemptId:(id)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaOrchestrationAttemptId:(id)arg1;
- (void)setMediaOrchestrationResult:(long long)arg1;
- (void)setMediaResolutionPostTranscoding:(id)arg1;
- (void)setMediaSize:(long long)arg1;
- (void)setMediaType:(id)arg1;
- (void)setStepLatenciesMs:(id)arg1;
- (void)setTotalLatencyMs:(long long)arg1;
- (void)setTriggerType:(long long)arg1;
- (void)setUploadQualityLevel:(long long)arg1;

@end
