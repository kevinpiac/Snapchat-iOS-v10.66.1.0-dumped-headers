//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASpectaclesGetHdFlowEventBase : SCASpectaclesTrackedEvent
{
    NSNumber *durationSec;
    NSNumber *numHdVideos;
    NSString *transferSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getDurationSec;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNumHdVideos;
- (double)getPerUserSamplingRate;
- (id)getTransferSessionId;
- (void)setDurationSec:(double)arg1;
- (void)setNumHdVideos:(long long)arg1;
- (void)setTransferSessionId:(id)arg1;

@end
