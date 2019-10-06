//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCAvatarViewDelegate-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCSendToScrollLabeling-Protocol.h"

@class NSString, SCAvatarView, SCEventListenerAnnouncer, SCNetworkImageView, SCSendToScrollLabelModel, UIImageView, UILabel, UIView;
@protocol SCActionHandling, SCImageDownloading;

@interface SCCheetahSendToStoryCollectionViewCell : SCSearchCollectionViewCell <SCAvatarViewDelegate, SCEventAnnouncing, SCActionable, SCSendToScrollLabeling>
{
    UIView *_thumbnailView;
    UIView *_backgroundView;
    SCNetworkImageView *_previewThumbnailImageView;
    SCAvatarView *_avatarView;
    UIView *_ringView;
    UIImageView *_accessoryPinImageView;
    UIImageView *_checkmarkPinImageView;
    UILabel *_nameLabel;
    UILabel *_officialFriendmojiLabel;
    UILabel *_showMoreLabel;
    _Bool _isAnimating;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    SCSendToScrollLabelModel *_scrollLabelModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (id)announcerIdentifier;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)_accessoryImageForViewModel:(id)arg1;
- (void)_animateSelectionState;
- (void)_animateThumbnailViewToScale:(double)arg1;
- (void)_announceTapAction;
- (id)_createAccessoryPinImageView;
- (id)_createCheckmarkPinImageView;
- (id)_createLabel;
- (id)_createThumbnailView;
- (void)_hideAccessoryPin;
- (void)_hideCheckmarkPin;
- (void)_setIsAnimatingToNo;
- (_Bool)_shouldAnimateFromViewModel:(id)arg1 toViewModel:(id)arg2;
- (void)_updateAvatarView;
- (void)_updateAvatarViewWithViewModel:(id)arg1 forStoryId:(id)arg2;
- (void)_updateShowMoreLabelView:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)configureAvatarWithUserSession:(id)arg1 contexts:(id)arg2 feature:(long long)arg3;
- (void)handleLongPressAction;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapAction;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (_Bool)hasOverridedLongPressAction;
- (_Bool)hasOverridedTapAction;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)installAutoLayoutConstraints;
- (void)layoutSubviews;
- (void)removeListener:(id)arg1;
@property(readonly, copy, nonatomic) SCSendToScrollLabelModel *scrollLabelModel; // @synthesize scrollLabelModel=_scrollLabelModel;
- (void)setViewModel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

