//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFeatureHandsFreeView-Protocol.h"

@class NSString, SCFeatureHandsFreeTooltip, SCGrowingButton, SCUserSession, SCVideoCaptureConfiguration, UIImageView;
@protocol SCFeatureContainerView;

@interface SCFeatureHandsFreeViewV1Impl : UIView <SCFeatureHandsFreeView>
{
    UIView<SCFeatureContainerView> *_containerView;
    SCUserSession *_userSession;
    SCFeatureHandsFreeTooltip *_tooltipViews;
    struct CGPoint _gesturePreviousPosition;
    CDUnknownBlockType _cancelBlock;
    UIView *_handsFreeView;
    unsigned long long _state;
    SCVideoCaptureConfiguration *_videoCaptureConfiguration;
    UIView *_hitboxView;
    UIImageView *_lockIcon;
    UIView *_lockCircleView;
    UIView *_stopRecordingView;
    UIView *_captureFillView;
    SCGrowingButton *_cancelButton;
    struct CGPoint _gestureStartPosition;
    struct CGPoint _gestureCurrentPosition;
}

- (void).cxx_destruct;
- (void)_animateView:(id)arg1 fromCenter:(struct CGPoint)arg2 toCenter:(struct CGPoint)arg3;
- (void)_cancelTapped;
- (void)_setLockIconToSelectedState:(_Bool)arg1;
- (id)accessibilityElements;
@property(readonly, nonatomic) struct CGRect cameraTimerFrame;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) SCGrowingButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *captureFillView; // @synthesize captureFillView=_captureFillView;
@property(nonatomic) struct CGPoint gestureCurrentPosition; // @synthesize gestureCurrentPosition=_gestureCurrentPosition;
@property(nonatomic) struct CGPoint gestureStartPosition; // @synthesize gestureStartPosition=_gestureStartPosition;
@property(readonly, nonatomic) UIView *handsFreeView; // @synthesize handsFreeView=_handsFreeView;
@property(retain, nonatomic) UIView *hitboxView; // @synthesize hitboxView=_hitboxView;
- (id)initWithContainerView:(id)arg1 userSession:(id)arg2;
- (_Bool)isAccessibilityElement;
- (_Bool)isPointInCancelButton:(struct CGPoint)arg1;
- (_Bool)isPointInCaptureButton:(struct CGPoint)arg1;
- (_Bool)isPointInHitBox:(struct CGPoint)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *lockCircleView; // @synthesize lockCircleView=_lockCircleView;
@property(retain, nonatomic) UIImageView *lockIcon; // @synthesize lockIcon=_lockIcon;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIView *stopRecordingView; // @synthesize stopRecordingView=_stopRecordingView;
@property(copy, nonatomic) SCVideoCaptureConfiguration *videoCaptureConfiguration; // @synthesize videoCaptureConfiguration=_videoCaptureConfiguration;
- (_Bool)shouldActivateHandsFree;
- (_Bool)shouldDisplayHandsFreeTooltip;
- (id)tooltipTextForTriggeringHandsFree;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

