//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"
#import "SCChatSharedLocationViewDelegate-Protocol.h"
#import "SCLocationShareWithFriendControllerShareFlowDelegate-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"

@class NSDate, NSString, SCChatLocationShareMessage, SCChatSDKActionContext, SCChatSharedLocationView, SCLocationShareWithFriendController, SCMapPersonLocation, SCUserSession, UIImage;

@interface SCChatLocationShareMessageRenderer : NSObject <SCChatSharedLocationViewDelegate, SCMapPersonLocationsListener, SCLocationShareWithFriendControllerShareFlowDelegate, SCChatMessageRenderer>
{
    SCChatLocationShareMessage *_message;
    NSDate *_createdTimestamp;
    NSString *_messageId;
    SCUserSession *_userSession;
    NSString *_senderUsername;
    _Bool _hasRefreshedFriendLocationsSinceAppearance;
    SCLocationShareWithFriendController *_shareLocationWithFriendController;
    SCChatSharedLocationView *_currentContentView;
    SCMapPersonLocation *_senderPersonLocation;
    NSString *_senderStickerId;
    UIImage *_senderBitmojiImage;
    unsigned long long _userResponse;
    SCChatSDKActionContext *_actionContext;
}

+ (id)_viewModelForBlurredMapWithText:(id)arg1 userSession:(id)arg2;
+ (id)_viewModelForInvalidMessageWithUserSession:(id)arg1;
+ (id)_viewModelForMessageFromSenderWhoIsNotFriendFromGroupId:(id)arg1 withUserId:(id)arg2 userSession:(id)arg3;
+ (id)_viewModelFromFriendWithoutLocationWithFirstName:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
- (id)_calloutSubtitleWithTimestamp:(id)arg1 senderLocality:(id)arg2;
- (_Bool)_canShareBack;
- (id)_firstNameToDisplay;
- (_Bool)_getFriendCoordinate:(id *)arg1 timestamp:(id *)arg2;
- (_Bool)_hasUserRespondedAlready;
- (id)_locationViewModel;
- (_Bool)_messageHasUnexpiredEmbeddedLocation;
- (unsigned long long)_outgoingSharingStatus;
- (id)_sender;
- (_Bool)_senderIsSelf;
- (void)_setSenderPersonLocation:(id)arg1;
- (void)_setSenderStickerId:(id)arg1;
- (void)_shareBack;
- (void)_startUpdatingFriendLocation;
- (void)_updatePayloadWithUserResponse:(unsigned long long)arg1;
- (void)_updateViewContentIfPresented;
- (id)_viewModelForSentLocation:(id)arg1 timestamp:(id)arg2;
- (id)_viewModelForValidReceivedLocation:(id)arg1 timestamp:(id)arg2;
@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void)chatSharedLocationViewDidTapMap:(id)arg1;
- (id)createContentView;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)didTap:(struct CGPoint)arg1;
- (id)initWithMessage:(id)arg1 createdTimestamp:(id)arg2 messageId:(id)arg3 userSession:(id)arg4 senderUsername:(id)arg5;
- (void)locationShareWithFriendController:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)prepareContentViewForReuse:(id)arg1;
- (id)reuseIdentifier;
- (void)setupContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;
- (void)willDisplayContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

