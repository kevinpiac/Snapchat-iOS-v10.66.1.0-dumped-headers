//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLogoutWorkflowDelegate-Protocol.h"
#import "SCSettingsUserActionDelegate-Protocol.h"

@class NSString, SCSettingsStartPage;
@protocol SCSettingsPageRouter, SCSettingsWorkflowDelegate;

@interface SCSettingsWorkflow : NSObject <SCSettingsUserActionDelegate, SCLogoutWorkflowDelegate>
{
    id <SCSettingsPageRouter> _settingsPageRouter;
    _Bool _didDismissSettings;
    id <SCSettingsWorkflowDelegate> _delegate;
    SCSettingsStartPage *_startPage;
}

- (void).cxx_destruct;
- (void)beginWorkflow;
- (void)didDismissSettings;
- (void)didFailRequestWithLogout:(id)arg1;
- (void)didFinishRequestWithLogout:(id)arg1;
- (void)didStartLogoutWithLogoutInfo:(id)arg1;
- (void)didTapSettingsBackButton;
- (id)initWithSettingsPageRouter:(id)arg1 startPage:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
