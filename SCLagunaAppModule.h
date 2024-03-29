//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCInformationSettingsViewControllerDelegate-Protocol.h"
#import "SCSpectaclesUrlViewControllerFactory-Protocol.h"

@class NSString, SCSessionRequestManager;
@protocol SCSpectaclesUrlViewControllerDelegate;

@interface SCLagunaAppModule : NSObject <SCInformationSettingsViewControllerDelegate, SCSpectaclesUrlViewControllerFactory>
{
    SCSessionRequestManager *_requestManager;
    id <SCSpectaclesUrlViewControllerDelegate> _urlViewControllerDelegate;
}

+ (id)sharedModule;
- (void).cxx_destruct;
- (void)dismissInformationSettingsView:(id)arg1;
- (id)newLagunaPairingViewControllerWithUserSession:(id)arg1 delegate:(id)arg2 source:(unsigned long long)arg3;
- (id)newLagunaSettingUIViewControllerWithUserSession:(id)arg1 delegate:(id)arg2;
- (id)newViewControllerWithUrl:(id)arg1 delegate:(id)arg2;
@property(nonatomic) __weak SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(nonatomic) __weak id <SCSpectaclesUrlViewControllerDelegate> urlViewControllerDelegate; // @synthesize urlViewControllerDelegate=_urlViewControllerDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

