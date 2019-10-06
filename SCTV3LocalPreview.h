//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, SCTLabelOverlayView;
@protocol SCTCameraServices;

@interface SCTV3LocalPreview : UIView
{
    id <SCTCameraServices> _cameraServices;
    SCLoadingIndicatorView *_loadingIndicator;
    UIView *_cameraPreview;
    _Bool _cameraPreviewRequested;
    SCTLabelOverlayView *_mutedOverlayView;
    _Bool _muted;
    _Bool _mutedLabelSuppressed;
    _Bool _active;
}

- (void).cxx_destruct;
- (void)_addLoadingSpinner;
- (void)_attachCameraPreview:(id)arg1;
- (void)_relinquishCamera;
- (void)_startCameraPreview;
- (void)_startOrStopCameraPreviewIfNeeded;
- (void)_stopCameraPreview;
- (void)_updateMutedLabelVisiblity;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithCameraServices:(id)arg1;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic, getter=isMutedLabelSuppressed) _Bool mutedLabelSuppressed; // @synthesize mutedLabelSuppressed=_mutedLabelSuppressed;
- (void)layoutSubviews;
- (void)removeFromSuperview;

@end

