//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsActionHandling-Protocol.h"

@class NSString, SCInviteContactActionHandler, SCInviteFriendStateTracker, SCLazy, SCOpenAddSnapcodeActionHandler, SCPostRegMultiAddFriendsActionHandler, SCSnapchattersActionHandler, SCUserSession, UIViewController;

@interface SCPostRegAddFriendsActionHandler : NSObject <SCAddFriendsActionHandling>
{
    SCLazy *_snapchattersDataMutator;
    SCUserSession *_userSession;
    SCLazy *_snapchattersDataProvider;
    SCInviteFriendStateTracker *_inviteFriendStateTracker;
    SCLazy *_postRegAddFriendsTracker;
    SCOpenAddSnapcodeActionHandler *_openAddSnapcodeActionHandler;
    SCInviteContactActionHandler *_inviteContactActionHandler;
    SCSnapchattersActionHandler *_snapchattersActionHandler;
    SCPostRegMultiAddFriendsActionHandler *_postRegMultiAddFriendsActionHandler;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSnapchattersDataMutator:(id)arg1 userSession:(id)arg2 snapchattersDataProvider:(id)arg3 inviteFriendStateTracker:(id)arg4 postRegAddFriendsTracker:(id)arg5;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

