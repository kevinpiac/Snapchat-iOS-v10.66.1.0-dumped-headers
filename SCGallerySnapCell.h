//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGListBindable-Protocol.h"
#import "SCGalleryCellTransitioning-Protocol.h"
#import "SCGalleryEntrySyncStatusGeneratorDelegate-Protocol.h"
#import "SCGalleryViewCellScreenPosition-Protocol.h"
#import "SCGalleryViewCellSelecting-Protocol.h"

@class NSString, SCGalleryEntrySyncStatusGenerator, SCGallerySnapCellViewModel, SCLoadingIndicatorView, SCMemoriesStatusIcon, SCUserSession, UIImageView, UILabel, UIView;
@protocol SCCachingMediaRequest, SCCanceling, SCGallerySnapCellDelegate;

@interface SCGallerySnapCell : UICollectionViewCell <SCGalleryEntrySyncStatusGeneratorDelegate, IGListBindable, SCGalleryCellTransitioning, SCGalleryViewCellSelecting, SCGalleryViewCellScreenPosition>
{
    SCGallerySnapCellViewModel *_cellViewModel;
    CDStruct_bac8f6e9 _mediaScenePath;
    SCUserSession *_userSession;
    _Bool _hasProcessedPreloadLogic;
    UIImageView *_imageView;
    UIView *_overlayView;
    UIImageView *_selectionIcon;
    CDUnknownBlockType _miniThumbnailBlock;
    SCMemoriesStatusIcon *_incompatibleIcon;
    SCLoadingIndicatorView *_loadingIndicator;
    UILabel *_videoDurationLabel;
    UIImageView *_highlightIcon;
    id <SCCachingMediaRequest> _mediaRequest;
    id <SCCanceling> _miniThumbnailRequest;
    SCGalleryEntrySyncStatusGenerator *_syncStatusGenerator;
    UIImageView *_badgeView;
    _Bool _selectMode;
    id <SCGallerySnapCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_addIncompatibleIcon;
- (void)_cancelMiniThumbnailBlock;
- (void)_configureSyncStatusGenerator;
- (void)_requestImage:(id)arg1;
- (void)_requestThumbnail:(id)arg1;
- (void)_shouldShowLoadingIndicator:(_Bool)arg1;
- (void)_startLoading;
- (void)_stopLoading;
- (void)_updateLoadingIndicator:(_Bool)arg1;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (void)bindViewModel:(id)arg1;
- (_Bool)containsSnapId:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCGallerySnapCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)interactionMode;
- (void)prepareForReuse;
@property(readonly, nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
- (void)setSelectMode:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)setTransitioningInitialImage:(id)arg1;
- (void)setViewModel:(id)arg1 selectMode:(_Bool)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 userSession:(id)arg4;
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

