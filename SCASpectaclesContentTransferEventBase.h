//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASpectaclesContentTransferEventBase : SCASpectaclesTrackedEvent
{
    NSNumber *wifiFrequencyMhz;
    long long transferChannel;
    long long transferType;
    NSString *transferSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getTransferChannel;
- (id)getTransferSessionId;
- (long long)getTransferType;
- (long long)getWifiFrequencyMhz;
- (id)init;
- (void)setTransferChannel:(long long)arg1;
- (void)setTransferSessionId:(id)arg1;
- (void)setTransferType:(long long)arg1;
- (void)setWifiFrequencyMhz:(long long)arg1;

@end

