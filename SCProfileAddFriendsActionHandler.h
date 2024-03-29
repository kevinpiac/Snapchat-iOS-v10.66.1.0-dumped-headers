//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCOpenUnifiedProfileActionHandlerDelegate-Protocol.h"

@class NSString, SCFriendsFeedOpenCameraActionHandler, SCFriendsFeedOpenChatActionHandler, SCFriendsFeedOpenMiniProfileActionHandler, SCInviteContactActionHandler, SCOpenAddFriendsActionHandler, SCOpenUnifiedProfileActionHandler, SCSnapchattersActionHandler, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCPageNameLogging, SCReplyDelegate, SCStartChatDelegate;

@interface SCProfileAddFriendsActionHandler : NSObject <SCOpenUnifiedProfileActionHandlerDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    SCFriendsFeedOpenMiniProfileActionHandler *_openMiniProfileActionHandler;
    SCOpenAddFriendsActionHandler *_openAddFriendsActionHandler;
    SCSnapchattersActionHandler *_snapchattersActionHandler;
    SCInviteContactActionHandler *_inviteContactActionHandler;
    SCFriendsFeedOpenCameraActionHandler *_openCameraActionHanlder;
    SCFriendsFeedOpenChatActionHandler *_openChatActionHanlder;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
    UIViewController<SCPageNameLogging> *_presentingController;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCReplyDelegate> _replyDelegate;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (id)_newOpenAddFriendsActionHandler;
- (id)_newOpenMiniProfileActionHandler;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingController:(id)arg1 userSession:(id)arg2 startChatDelegate:(id)arg3 replyDelegate:(id)arg4 navigationDelegate:(id)arg5 inviteFriendStateTracker:(id)arg6;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 deepLinkURL:(id)arg3;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingController; // @synthesize presentingController=_presentingController;
@property(readonly, nonatomic) __weak id <SCReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
@property(readonly, nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

