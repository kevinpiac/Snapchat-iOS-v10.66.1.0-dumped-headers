//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"
#import "SCLocationShareWithFriendControllerShareFlowDelegate-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"

@class NSString, SCChatSDKActionContext, SCChatSharedLocationView, SCLocationShareWithFriendController, SCMapPerson, SCMapPersonLocation, SCUserSession, UIImage;

@interface SCChatLocationRequestMessageRenderer : NSObject <SCMapPersonLocationsListener, SCLocationShareWithFriendControllerShareFlowDelegate, SCChatMessageRenderer>
{
    NSString *_senderUserId;
    NSString *_senderUsername;
    NSString *_selfUsername;
    NSString *_recipientUserId;
    NSString *_messageId;
    SCMapPerson *_aFriend;
    SCUserSession *_userSession;
    SCChatSharedLocationView *_currentContentView;
    SCMapPersonLocation *_selfLocation;
    UIImage *_selfBitmojiImage;
    unsigned long long _requestResponse;
    SCChatSDKActionContext *_actionContext;
    SCLocationShareWithFriendController *_shareLocationWithFriendController;
}

- (void).cxx_destruct;
- (void)_acceptRequest;
- (_Bool)_canStartSharing;
- (void)_fetchSelfBitmojiIfNeeded;
- (id)_firstNameToDisplay;
- (id)_friend;
- (void)_ignoreRequest;
- (_Bool)_isAlreadySharing;
- (id)_locationResponseButtonsWithShareButtonTitle:(id)arg1;
- (id)_locationViewModel;
- (id)_reserializeDataWithResponse:(unsigned long long)arg1;
- (_Bool)_senderIsSelf;
- (void)_updateViewContentIfPresented;
@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (id)createContentView;
- (void)didEndDisplayingContentView:(id)arg1;
- (id)initWithSenderId:(id)arg1 senderUsername:(id)arg2 recipientId:(id)arg3 messageId:(id)arg4 userSession:(id)arg5 requestResponse:(unsigned long long)arg6;
- (void)locationShareWithFriendController:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)prepareContentViewForReuse:(id)arg1;
- (id)reuseIdentifier;
@property(retain, nonatomic) SCLocationShareWithFriendController *shareLocationWithFriendController; // @synthesize shareLocationWithFriendController=_shareLocationWithFriendController;
- (void)setupContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;
- (void)willDisplayContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

