//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCGalleryEntrySyncStatusGeneratorDelegate-Protocol.h"
#import "SCGalleryEntryThumbnailGeneratorDelegate-Protocol.h"
#import "SCGalleryEntryViewCellProtocol-Protocol.h"
#import "SCGalleryFaceManagerListener-Protocol.h"
#import "SCGalleryViewCellScreenPosition-Protocol.h"
#import "SCProgressReceiving-Protocol.h"

@class CAShapeLayer, NSArray, NSDictionary, NSString, NSTimer, SCGalleryCreatorIconView, SCGalleryDebugSyncStatusChecker, SCGalleryDebugSyncStatusView, SCGalleryEntrySyncStatusGenerator, SCGalleryEntryThumbnailGenerator, SCLoadingIndicatorView, SCMemoriesStatusIcon, SCSentinel, SCStoryRingView, SCUserSession, SCVisualEffectView, UIImage, UIImageView, UILabel, UIView;
@protocol SCGalleryEntry, SCGalleryEntryViewCellDelegate;

@interface SCGalleryEntryViewCell : UICollectionViewCell <SCGalleryEntryThumbnailGeneratorDelegate, SCProgressReceiving, SCGalleryEntrySyncStatusGeneratorDelegate, SCGalleryFaceManagerListener, SCGalleryEntryViewCellProtocol, SCGalleryViewCellScreenPosition>
{
    id <SCGalleryEntryViewCellDelegate> _delegate;
    UIView *_contentWrapperView;
    UIView *_imageWrapperView;
    UIImageView *_imageView;
    SCVisualEffectView *_storyVisualEffectView;
    UIImageView *_storyOverlayView;
    UIView *_selectedOverlayView;
    SCSentinel *_sentinel;
    SCUserSession *_userSession;
    id <SCGalleryEntry> _entry;
    NSArray *_snaps;
    struct CGSize _targetSize;
    CDStruct_bac8f6e9 _mediaScenePath;
    _Bool _contentsUnloaded;
    SCGalleryEntryThumbnailGenerator *_thumbnailGenerator;
    SCGalleryEntrySyncStatusGenerator *_syncStatusGenerator;
    SCGalleryDebugSyncStatusChecker *_debugSyncStatusChecker;
    SCGalleryDebugSyncStatusView *_debugSyncStatusView;
    NSTimer *_thumbnailLatency10secTimer;
    _Bool _selectMode;
    _Bool _selected;
    SCLoadingIndicatorView *_loadingIndicator;
    CAShapeLayer *_roundCornerMaskLayer;
    unsigned long long _cornerToRound;
    _Bool _isEntryClientCompatible;
    SCMemoriesStatusIcon *_incompatibleIcon;
    NSDictionary *_mediaIdToFaces;
    UILabel *_facesLabel;
    _Bool _hasProcessedPreloadLogic;
    SCGalleryCreatorIconView *_creatorIconView;
    UILabel *_leftBottomLabelView;
    SCStoryRingView *_storyRingView;
    UIImageView *_badgeView;
    _Bool _shouldCrossFade;
    UIImage *_firstThumbnail;
    int _firstThumbnailOrientation;
}

- (void).cxx_destruct;
- (void)_createAndShowBadgeForSnap:(id)arg1;
- (void)_createLeftBottomLabelIfNeeded;
- (void)_fetchFacesForCurrentSnapsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateTimers;
- (void)_setFullImage:(id)arg1 forSnap:(id)arg2;
- (void)_setupVideoThumbnailLabelIfNeeded:(double)arg1;
- (void)_showIncompatibleIcon:(_Bool)arg1;
- (void)_startLoading;
- (void)_startThumbnailLatencyTimers;
- (void)_stopLoadingIndicator;
- (void)_thumbnailLatencyTimerDidFire:(id)arg1;
- (void)_updateFaceInfoWithSnap:(id)arg1;
- (void)_updateWrapperViewWithGalleryType:(int)arg1;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (void)dealloc;
- (void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)faceManager:(id)arg1 didFaceScanGallerySnaps:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)interactionMode;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)reporterWithIdentifier:(id)arg1 didReportProgress:(CDUnknownBlockType)arg2;
- (void)roundCorner:(unsigned long long)arg1;
- (void)setEntry:(id)arg1 targetSize:(struct CGSize)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 contentsUnloaded:(_Bool)arg4 selectMode:(_Bool)arg5 debugSyncStatusChecker:(id)arg6 userSession:(id)arg7 delegate:(id)arg8;
- (void)setSelectMode:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)setTransitioningInitialImage:(id)arg1;
- (void)startGeneratingUpdates;
- (void)stopGeneratingUpdates;
- (void)thumbnailGenerator:(id)arg1 didLoadMiniThumbnail:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateSnapThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGeneratorHasDelayedLoading:(id)arg1;
- (void)toggleDebugSyncStatusView;
- (id)transitioningExpandingView;
- (id)transitioningImage;
- (id)transitioningPosterFrame;
- (void)viewIsFullyVisibleOnScreen:(_Bool)arg1 inSelectMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

