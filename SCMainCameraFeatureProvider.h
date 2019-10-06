//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCoreCameraFeatureProvider.h"

@class MainViewController, SCObservable;
@protocol SCUserInfoProviding;

@interface SCMainCameraFeatureProvider : SCCoreCameraFeatureProvider
{
    SCObservable *_applicationLifecycleEvents;
    MainViewController *_mainViewController;
    id <SCUserInfoProviding> _userInfoProvider;
}

- (void).cxx_destruct;
- (id)_applicationLifecycleEvents;
- (id)initWithCapturerToken:(id)arg1 userSession:(id)arg2 notificationManager:(id)arg3 mainViewController:(id)arg4 userInfoProvider:(id)arg5;
- (void)initializeFeatures:(id)arg1;
- (void)initializeFeaturesOnce:(id)arg1;
- (void)resetInstances;

@end
