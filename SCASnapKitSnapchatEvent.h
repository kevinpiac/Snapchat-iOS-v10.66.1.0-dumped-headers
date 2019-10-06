//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCASnapKitSnapchatEvent : SCAUserTrackedEvent
{
    long long kitVariant;
    NSString *oAuthClientId;
    NSString *kitVariantVersion;
    NSString *kitAppId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getKitAppId;
- (long long)getKitVariant;
- (id)getKitVariantVersion;
- (id)getOAuthClientId;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setKitAppId:(id)arg1;
- (void)setKitVariant:(long long)arg1;
- (void)setKitVariantVersion:(id)arg1;
- (void)setOAuthClientId:(id)arg1;

@end
