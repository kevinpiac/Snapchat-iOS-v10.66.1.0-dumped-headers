//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber;

@interface SCASpectaclesHomeWifiViewOpened : SCASpectaclesTrackedEvent
{
    NSNumber *numAddedNetworks;
    long long startSource;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNumAddedNetworks;
- (double)getPerUserSamplingRate;
- (long long)getStartSource;
- (id)init;
- (void)setNumAddedNetworks:(long long)arg1;
- (void)setStartSource:(long long)arg1;

@end

