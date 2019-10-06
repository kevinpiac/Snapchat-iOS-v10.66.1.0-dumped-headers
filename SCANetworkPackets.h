//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCANetworkPackets : NSObject <NamedEvent, NSCopying>
{
    NSNumber *wifiPacketsRx;
    NSNumber *wifiPacketsTx;
    NSNumber *wwanPacketsRx;
    NSNumber *wwanPacketsTx;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getWifiPacketsRx;
- (long long)getWifiPacketsTx;
- (long long)getWwanPacketsRx;
- (long long)getWwanPacketsTx;
- (void)setWifiPacketsRx:(long long)arg1;
- (void)setWifiPacketsTx:(long long)arg1;
- (void)setWwanPacketsRx:(long long)arg1;
- (void)setWwanPacketsTx:(long long)arg1;

@end

