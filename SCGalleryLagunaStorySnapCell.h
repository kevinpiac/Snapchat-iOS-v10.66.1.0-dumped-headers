//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGalleryBaseStorySnapCell.h"

#import "SCGalleryLagunaContentListener-Protocol.h"

@class CAShapeLayer, NSString, SCGalleryLagunaContentLoader, SCGalleryLagunaStorySnapCellModel, SCGalleryLagunaStorySnapCellProgressView, UIImageView, UILabel, UIView;
@protocol SCGalleryLagunaStorySnapCellListener;

@interface SCGalleryLagunaStorySnapCell : SCGalleryBaseStorySnapCell <SCGalleryLagunaContentListener>
{
    SCGalleryLagunaStorySnapCellProgressView *_progressView;
    UIImageView *_greyscaleImageView;
    SCGalleryLagunaContentLoader *_contentLoader;
    id <SCGalleryLagunaStorySnapCellListener> _listener;
    UIImageView *_highlightIcon;
    UIView *_newSnapIndicator;
    CAShapeLayer *_newSnapIndicatorLayer;
    _Bool _shouldShowIndicator;
    UIImageView *_imageOverlay;
    UILabel *_videoDurationLabel;
    _Bool _selectMode;
    SCGalleryLagunaStorySnapCellModel *_model;
}

- (void).cxx_destruct;
- (void)_animateImageView:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_convertImageToGrayScale:(id)arg1;
- (unsigned long long)_defaultAnimationOptions;
- (void)_didFetchImage:(id)arg1;
- (_Bool)_progressUpdateEnabledForContentComponent:(unsigned long long)arg1;
- (void)_resetImageViewState;
- (_Bool)_selectionEnabled;
- (void)_setupVideoThumbnailLabelIfNeeded:(id)arg1;
- (void)_updateImageViewState;
- (void)_updateModelWithImage:(id)arg1;
- (void)_updateModelWithState:(unsigned long long)arg1 image:(id)arg2 progress:(double)arg3;
- (void)_updateModelWithState:(unsigned long long)arg1 progress:(double)arg2;
- (void)_updateModelWithStatePausedForContentComponent:(unsigned long long)arg1;
- (void)dealloc;
- (void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isTransferring;
@property(readonly, nonatomic) SCGalleryLagunaStorySnapCellModel *model; // @synthesize model=_model;
- (void)prepareForReuse;
@property(readonly, nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
- (void)setListener:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (void)setSnap:(id)arg1 storyViewModel:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 selectMode:(_Bool)arg4 userSession:(id)arg5 debugSyncStatusChecker:(id)arg6;
- (void)setSnap:(id)arg1 storyViewModel:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 selectMode:(_Bool)arg4 userSession:(id)arg5 shouldShowIndicator:(_Bool)arg6;
- (void)showNewlyTransferIndicator:(_Bool)arg1;
- (id)sourceViewForOpera;
- (void)updateIcon;
- (void)updateUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

