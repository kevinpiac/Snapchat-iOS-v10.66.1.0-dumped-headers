//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCANetworkRadioOverheadMetrics : NSObject <NamedEvent, NSCopying>
{
    NSNumber *networkActivityTimeMs;
    NSNumber *networkWifiActivityTimeMs;
    NSNumber *networkWwanActivityTimeMs;
    NSNumber *networkRadioOverheadTimeMs;
    NSNumber *networkWifiRadioOverheadTimeMs;
    NSNumber *networkWwanRadioOverheadTimeMs;
    NSNumber *networkActivityCount;
    NSString *networkActivityAttributionMap;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getNetworkActivityAttributionMap;
- (long long)getNetworkActivityCount;
- (long long)getNetworkActivityTimeMs;
- (long long)getNetworkRadioOverheadTimeMs;
- (long long)getNetworkWifiActivityTimeMs;
- (long long)getNetworkWifiRadioOverheadTimeMs;
- (long long)getNetworkWwanActivityTimeMs;
- (long long)getNetworkWwanRadioOverheadTimeMs;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (void)setNetworkActivityAttributionMap:(id)arg1;
- (void)setNetworkActivityCount:(long long)arg1;
- (void)setNetworkActivityTimeMs:(long long)arg1;
- (void)setNetworkRadioOverheadTimeMs:(long long)arg1;
- (void)setNetworkWifiActivityTimeMs:(long long)arg1;
- (void)setNetworkWifiRadioOverheadTimeMs:(long long)arg1;
- (void)setNetworkWwanActivityTimeMs:(long long)arg1;
- (void)setNetworkWwanRadioOverheadTimeMs:(long long)arg1;

@end
