//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, SCAppDelegate, UIApplication;
@protocol SCAppDelegatePropertiesProtocol;

@protocol SCAppStartupStateProtocol
@property(readonly, nonatomic) long long appStartupType;
@property(readonly, nonatomic) UIApplication *application;
@property(readonly, nonatomic) long long applicationState;
@property(readonly, nonatomic) __weak SCAppDelegate *delegate;
@property(readonly, nonatomic) id <SCAppDelegatePropertiesProtocol> delegateProperties;
@property(nonatomic) _Bool headlessMode;
@property(readonly, nonatomic) _Bool isForegroundLaunch;
@property(readonly, nonatomic) _Bool isFromNotification;
@property(readonly, nonatomic) NSDictionary *launchOptions;
@property(readonly, nonatomic) double preAppOpenLatency;
@end

