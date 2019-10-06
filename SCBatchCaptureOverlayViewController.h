//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBatchCaptureCameraOverlayViewDelegate-Protocol.h"

@class SCBatchCaptureCameraOverlayView;
@protocol SCBatchCaptureOverlayViewControllerDelegate;

@interface SCBatchCaptureOverlayViewController : NSObject <SCBatchCaptureCameraOverlayViewDelegate>
{
    _Bool _isCapturing;
    id <SCBatchCaptureOverlayViewControllerDelegate> _delegate;
    SCBatchCaptureCameraOverlayView *_overlayView;
}

- (void).cxx_destruct;
- (void)addToParentView:(id)arg1;
- (void)batchCaptureCameraOverlayViewDidPressReviewAndEdit:(id)arg1;
@property(nonatomic) __weak id <SCBatchCaptureOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)flashScreenWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithParentView:(id)arg1;
@property(readonly, nonatomic) SCBatchCaptureCameraOverlayView *overlayView; // @synthesize overlayView=_overlayView;
- (void)setIsCapturing:(_Bool)arg1;
- (_Bool)shouldHandleTouchAtPoint:(struct CGPoint)arg1;
- (void)startScreenShotAnimationWithImage:(id)arg1;
- (void)updateLastSegmentThumbnail:(id)arg1 totalCount:(long long)arg2 animated:(_Bool)arg3;
- (void)videoCaptureHasBegun;

@end
