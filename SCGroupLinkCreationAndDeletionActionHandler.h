//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCExperimentManager, SCMaxGroupSizeAlertView, UIViewController;
@protocol SCChatGroup, SCGroupManager;

@interface SCGroupLinkCreationAndDeletionActionHandler : NSObject <SCActionHandling>
{
    id <SCGroupManager> _groupManager;
    id <SCChatGroup> _baseGroup;
    SCMaxGroupSizeAlertView *_maxGroupSizeAlertView;
    SCExperimentManager *_experimentManager;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_handleCreateInviteLinkToGroup;
- (void)_handleDeleteInviteLinksToGroup;
- (void)_presentShareSheetWithDeepLinkPayload:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithGroupManager:(id)arg1 baseGroup:(id)arg2 experimentManager:(id)arg3 presentingViewController:(id)arg4;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)setBaseGroupWithGroupId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

