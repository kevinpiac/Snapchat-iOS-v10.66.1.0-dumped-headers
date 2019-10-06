//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCObserver-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCObservable, SCUserSessionContext, UIApplication;
@protocol SCAppUserLifecycleEventObserver;

@interface SCAppUserLifecycleEventHandler : NSObject <SCObserver, SCTraceEnabled>
{
    id <SCAppUserLifecycleEventObserver> _observer;
    SCUserSessionContext *_userSessionContext;
    UIApplication *_application;
    SCObservable *_applicationLifecycleEvent;
}

- (void).cxx_destruct;
- (void)_handleAppDidBecomeActive;
- (void)_handleAppDidEnterBackground;
- (void)_handleAppDidFinishLaunching;
- (void)_handleAppWillEnterForeground;
- (void)_handleAppWillResignActive;
- (void)_handleAppWillTerminate;
- (void)_handleUserLoggedIn;
- (void)_handleUserRegistered;
- (void)_handleUserResumed;
- (void)beginObserving;
- (void)complete;
- (id)initWithUserSessionContext:(id)arg1 applicationLifecycleEvents:(id)arg2 application:(id)arg3 appUserLifecycleEventObserver:(id)arg4;
- (void)next:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

