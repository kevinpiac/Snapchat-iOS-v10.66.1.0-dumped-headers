//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCViewportConfigurable-Protocol.h"

@class NSString, SCActionModel, SCEventListenerAnnouncer, SCGradientView, SCLazy, SCNetworkImageView, SCSearchNetworkVideo, SCSearchNetworkVideoView, SCSearchStoryIcon, SCSearchStreamingMediaInfo, SCSearchVideoStreamingView, UILabel;
@protocol SCActionHandling, SCImageDownloading, SCLegacyItemDownloading;

@interface SCSearchVisualVerticalStoryCollectionViewCell : SCSearchCollectionViewCell <SCActionable, SCViewportConfigurable, SCEventAnnouncing, SCEventListener>
{
    SCNetworkImageView *_storyCoverImageView;
    SCSearchNetworkVideoView *_storyCoverVideoView;
    SCSearchVideoStreamingView *_storyCoverVideoStreamingView;
    SCGradientView *_gradientView;
    SCGradientView *_noTitleGradientView;
    SCNetworkImageView *_iconImageView;
    SCSearchStoryIcon *_icon;
    struct UIEdgeInsets _cardInsets;
    struct UIEdgeInsets _iconInsets;
    struct UIEdgeInsets _categoryInsets;
    UILabel *_subtitleLabel;
    UILabel *_emojiLabel;
    UILabel *_categoryLabel;
    UILabel *_titleLabel;
    SCLazy *_debugButton;
    SCActionModel *_singleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCSearchNetworkVideo *_videoThumbnail;
    SCSearchStreamingMediaInfo *_videoStreamingThumbnail;
    _Bool _shouldPlayVideoImmediately;
    _Bool _enableVideoStreamingThumbnail;
    _Bool _isVideoThumbnailPlaying;
    struct CGPoint _lastOrigin;
    double _lastOriginCaptureTime;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _videoDownloader;
    id <SCLegacyItemDownloading> _streamingCompositeDownloader;
    struct CGRect _viewportFrame;
}

+ (id)announcerIdentifier;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct CGSize)thumbnailImageSize;
- (void).cxx_destruct;
- (void)_compareAndUpdateViewModelIfNeeded:(id)arg1;
- (void)_debugGesture:(id)arg1;
- (void)_layoutWithViewModel;
- (void)_playVideoThumbnail;
- (void)_setupCoverVideoStreamingViewWithVideoThumbnail:(id)arg1;
- (void)_setupCoverVideoViewWithVideoThumbnail:(id)arg1;
- (void)_setupDebugButtonWithViewModelIfNeed:(id)arg1;
- (void)_stopVideoThumbnail;
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
- (void)prepareForReuse;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) id <SCLegacyItemDownloading> streamingCompositeDownloader; // @synthesize streamingCompositeDownloader=_streamingCompositeDownloader;
@property(retain, nonatomic) id <SCLegacyItemDownloading> videoDownloader; // @synthesize videoDownloader=_videoDownloader;
- (void)setViewModel:(id)arg1;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
- (_Bool)shouldShowBackgroundView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewModel;
- (void)viewportDidUpdateViewportFrame:(struct CGRect)arg1 dragging:(_Bool)arg2 decelerating:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

