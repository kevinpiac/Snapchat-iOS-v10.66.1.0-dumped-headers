//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUAdAdPreferences, SOJUAdApp, SOJUAdDevice, SOJUAdFeatureFlags, SOJUAdTargeting;

@interface SOJUAdRequestBuilder : NSObject
{
    NSString *_userAdId;
    NSNumber *_canTrack;
    NSString *_rawUserData;
    SOJUAdTargeting *_targeting;
    NSString *_sessionId;
    NSArray *_unusedAds;
    NSNumber *_debug;
    NSNumber *_replayTime;
    SOJUAdAdPreferences *_adPreferences;
    SOJUAdApp *_appInfo;
    SOJUAdDevice *_deviceInfo;
    SOJUAdFeatureFlags *_featureFlags;
}

+ (id)withJUAdRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAdPreferences:(id)arg1;
- (id)setAppInfo:(id)arg1;
- (id)setCanTrack:(id)arg1;
- (id)setCanTrackValue:(_Bool)arg1;
- (id)setDebug:(id)arg1;
- (id)setDebugValue:(_Bool)arg1;
- (id)setDeviceInfo:(id)arg1;
- (id)setFeatureFlags:(id)arg1;
- (id)setRawUserData:(id)arg1;
- (id)setReplayTime:(id)arg1;
- (id)setReplayTimeValue:(long long)arg1;
- (id)setSessionId:(id)arg1;
- (id)setTargeting:(id)arg1;
- (id)setUnusedAds:(id)arg1;
- (id)setUserAdId:(id)arg1;

@end

