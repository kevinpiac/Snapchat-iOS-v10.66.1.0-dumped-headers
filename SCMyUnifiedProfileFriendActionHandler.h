//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCPageNameLogging, SCReplyDelegate, SCStartChatDelegate;

@interface SCMyUnifiedProfileFriendActionHandler : NSObject <SCTraceEnabled, SCActionHandling>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCReplyDelegate> _replyDelegate;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_showAddFriends;
- (void)_showFriends;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 startChatDelegate:(id)arg3 replyDelegate:(id)arg4;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

