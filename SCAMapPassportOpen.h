//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAMapPassportOpen : SCAUserTrackedEvent
{
    NSNumber *mapSessionId;
    NSNumber *passportSessionId;
    NSNumber *statusSessionId;
    long long sourceType;
    long long mapSourceType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMapSessionId;
- (long long)getMapSourceType;
- (long long)getPassportSessionId;
- (double)getPerUserSamplingRate;
- (long long)getSourceType;
- (long long)getStatusSessionId;
- (id)init;
- (void)setMapSessionId:(long long)arg1;
- (void)setMapSourceType:(long long)arg1;
- (void)setPassportSessionId:(long long)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setStatusSessionId:(long long)arg1;

@end

