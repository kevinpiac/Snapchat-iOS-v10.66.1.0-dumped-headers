//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder-Protocol.h"
#import "SCCameraUserActionProviding-Protocol.h"
#import "SCFeatureHandsFree-Protocol.h"

@class NSString, SCFeatureReference, SCLazy, SCLongPressGestureRecognizer, SCUserSession, UIGestureRecognizer;
@protocol SCPreviewPresenter;

@interface SCFeatureHandsFreeImpl : SCFeature <SCCameraUserActionProviding, SCFeatureHandsFree, SCCameraGestureResponder>
{
    SCLazy *_view;
    SCUserSession *_userSession;
    UIGestureRecognizer *_lockGestureRecognizer;
    SCFeatureReference *_cameraUserActionLogger;
    _Bool _isRecording;
    _Bool _canEnable;
    _Bool _enabled;
    SCLongPressGestureRecognizer *_longPressGestureRecognizer;
    id <SCPreviewPresenter> _previewPresenter;
}

- (void).cxx_destruct;
- (void)_createAndSetupView:(id)arg1;
- (void)_didToggleAvailability;
- (void)_logCameraUserActionDidEndWithRecording:(_Bool)arg1;
- (void)_logCameraUserActionDidNotCompleteWithRecording:(_Bool)arg1;
- (void)_logCameraUserActionDidStartWithRecording:(_Bool)arg1 touchLocation:(struct CGPoint)arg2;
@property(readonly) long long actionType;
@property(readonly) long long cameraUIItem;
@property(nonatomic) _Bool canEnable; // @synthesize canEnable=_canEnable;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)forwardCameraTimerGesture:(id)arg1;
- (id)initWithUserSession:(id)arg1 cameraUserActionLogger:(id)arg2;
@property(readonly, nonatomic) SCLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (void)prepareForRecordingWithCapturer:(id)arg1 videoCaptureConfiguration:(id)arg2;
@property(nonatomic) __weak id <SCPreviewPresenter> previewPresenter; // @synthesize previewPresenter=_previewPresenter;
- (void)setCancelBlock:(CDUnknownBlockType)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldDisplayMultiSnapTooltip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

