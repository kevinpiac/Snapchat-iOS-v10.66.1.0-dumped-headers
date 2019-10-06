//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSString, SCActionModel, SCEventListenerAnnouncer, SCLazy, SCNetworkImageView, UILabel;
@protocol SCActionHandling, SCImageDownloading;

@interface SCSearchHorizontalStoryCollectionViewCell : SCSearchCollectionViewCell <SCActionable, SCEventAnnouncing, SCEventListener>
{
    SCNetworkImageView *_storyCoverImageView;
    UILabel *_emojiLabel;
    UILabel *_categoryLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SCLazy *_debugButton;
    SCLazy *_accessoryLabel;
    SCLazy *_accessoryLabelContainerView;
    SCActionModel *_singleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCLazy *_actionButtonLazyCreator;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (id)announcerIdentifier;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct CGSize)thumbnailImageSize;
- (void).cxx_destruct;
- (void)_compareAndUpdateViewModelIfNeeded:(id)arg1;
- (void)_debugGesture:(id)arg1;
- (void)_handleButtonTap:(id)arg1;
- (void)_layoutWithViewModel;
- (void)_setupDebugButtonWithViewModelIfNeed:(id)arg1;
- (_Bool)_shouldUseEmojiAsThumbnail;
- (void)_updateWithViewModel:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)handleLongPressAction;
- (void)handleTapAction;
- (_Bool)hasOverridedLongPressAction;
- (_Bool)hasOverridedTapAction;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)removeListener:(id)arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

