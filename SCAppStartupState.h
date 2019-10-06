//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppStartupStateProtocol-Protocol.h"

@class NSDictionary, SCAppDelegate, UIApplication;
@protocol SCAppDelegatePropertiesProtocol;

@interface SCAppStartupState : NSObject <SCAppStartupStateProtocol>
{
    _Bool _headlessMode;
    _Bool _isFromNotification;
    UIApplication *_application;
    long long _applicationState;
    SCAppDelegate *_delegate;
    long long _appStartupType;
    NSDictionary *_launchOptions;
    double _preAppOpenLatency;
    id <SCAppDelegatePropertiesProtocol> _delegateProperties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long appStartupType; // @synthesize appStartupType=_appStartupType;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) long long applicationState; // @synthesize applicationState=_applicationState;
- (void)configureStateForWarmStart;
@property(readonly, nonatomic) __weak SCAppDelegate *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SCAppDelegatePropertiesProtocol> delegateProperties; // @synthesize delegateProperties=_delegateProperties;
@property(nonatomic) _Bool headlessMode; // @synthesize headlessMode=_headlessMode;
- (id)initWithFromNotification:(_Bool)arg1 headlessMode:(_Bool)arg2 appDelegate:(id)arg3 appDelegateProperties:(id)arg4 application:(id)arg5 launchOptions:(id)arg6 applicationState:(long long)arg7 preAppOpenLatency:(double)arg8;
@property(readonly, nonatomic) _Bool isForegroundLaunch;
@property(readonly, nonatomic) _Bool isFromNotification; // @synthesize isFromNotification=_isFromNotification;
@property(readonly, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(readonly, nonatomic) double preAppOpenLatency; // @synthesize preAppOpenLatency=_preAppOpenLatency;

@end

