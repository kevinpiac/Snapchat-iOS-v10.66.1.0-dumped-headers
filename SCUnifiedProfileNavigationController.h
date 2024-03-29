//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBareboneNavigationController.h"

#import "SCCameraLifecycleControlling-Protocol.h"
#import "SCPageNameLogging-Protocol.h"

@class NSString;

@interface SCUnifiedProfileNavigationController : SCBareboneNavigationController <SCCameraLifecycleControlling, SCPageNameLogging>
{
}

- (id)pageViewName;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)sc_handlesStatusBarDuringModalDismissal;
- (_Bool)shouldStopCameraImmediately;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

