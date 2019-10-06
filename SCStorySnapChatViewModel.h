//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMediaChatViewModel.h"

#import "SCChatMetadataForwardable-Protocol.h"

@class NSString, SCChatSnapchatter, SCStorySnapMediaContent, SCStorySnapMetadata, SOJUStoryShare, UIColor;

@interface SCStorySnapChatViewModel : SCMediaChatViewModel <SCChatMetadataForwardable>
{
    SOJUStoryShare *_storyShare;
    _Bool _isUserTagged;
    UIColor *_senderColor;
    SCStorySnapMediaContent *_storySnapMediaContent;
    SCStorySnapMetadata *_storySnapMetadata;
    _Bool _isFriend;
    _Bool _isFriendWhoAddedYou;
    long long _addFriendButtonState;
    SCChatSnapchatter *_snapchatter;
}

- (void).cxx_destruct;
- (_Bool)_isUnviewable;
- (_Bool)_isVideoLaguna;
- (id)_updatedThumbnailViewModel;
- (long long)_viewableStatus;
@property(readonly, nonatomic) long long addFriendButtonState; // @synthesize addFriendButtonState=_addFriendButtonState;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)forwardButtonString;
- (id)forwardPreviewViewModel;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(readonly, nonatomic) _Bool isFriendWhoAddedYou; // @synthesize isFriendWhoAddedYou=_isFriendWhoAddedYou;
- (_Bool)isReadyToForward;
- (id)posterUsername;
- (id)reusableCellIdentifier;
- (id)sendTaskMetadataContainer;
- (_Bool)shouldShowSenderHeader;
- (_Bool)shouldShowStatusMessageHeaderLabel;
@property(readonly, copy, nonatomic) SCChatSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (id)storyShareTaggedLabel;
@property(readonly, copy, nonatomic) NSString *storySnapId;
- (id)textForStatusMessageHeaderLabel;
- (struct CGSize)thumbnailSize;
- (id)updatedThumbnailViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

