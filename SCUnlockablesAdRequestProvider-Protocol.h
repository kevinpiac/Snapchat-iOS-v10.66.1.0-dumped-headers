//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCAdsAdRequest, SCAdsApplication, SCAdsDevice, SCAdsNetwork, SCAdsPreferences;

@protocol SCUnlockablesAdRequestProvider
- (SCAdsPreferences *)adPreferences;
@property(readonly, nonatomic) SCAdsAdRequest *adRequest;
- (SCAdsDevice *)adsDevice;
- (SCAdsApplication *)application;
- (SCAdsNetwork *)network;
@end

