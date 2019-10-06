//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

#import "SCAvatarViewDelegate-Protocol.h"

@class FriendStories, NSString, SCAvatarView, SCLazy, SCPieSliceView, SCUserSession, UILabel, UITapGestureRecognizer, UIView;
@protocol SCGroupMiniProfileGroupStoryCellDelegate;

@interface SCGroupMiniProfileGroupStoryViewCell : SCMiniProfileCollectionViewCell <SCAvatarViewDelegate>
{
    UILabel *_nameLabel;
    UILabel *_subLabel;
    UIView *_subView;
    SCPieSliceView *_pieSliceView;
    SCAvatarView *_avatarView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCUserSession *_userSession;
    FriendStories *_friendStories;
    NSString *_groupId;
    SCLazy *_summaryInfoProvider;
    id <SCGroupMiniProfileGroupStoryCellDelegate> _storyDelegate;
}

- (void).cxx_destruct;
- (id)_displayNameForStoryAttribution:(id)arg1;
- (void)_handleAvatarTappedWithStorySummaryInfo:(id)arg1;
- (void)_setup;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutLabels;
- (void)layoutSubviews;
- (id)nameLabelFont;
- (double)nameLabelWidth;
- (id)pieSliceView;
- (void)prepareForReuse;
@property(nonatomic) __weak id <SCGroupMiniProfileGroupStoryCellDelegate> storyDelegate; // @synthesize storyDelegate=_storyDelegate;
- (void)setUserSession:(id)arg1;
- (void)updateGroupStoryName:(id)arg1;
- (void)updateLabel:(id)arg1 withStatusText:(id)arg2 date:(id)arg3 showTimestamp:(_Bool)arg4;
- (void)updateSubLabelWithFriendStories:(id)arg1;
- (void)updateWithFriendStories:(id)arg1 groupStoryName:(id)arg2 groupId:(id)arg3 groupStoryMuted:(_Bool)arg4;

@end
