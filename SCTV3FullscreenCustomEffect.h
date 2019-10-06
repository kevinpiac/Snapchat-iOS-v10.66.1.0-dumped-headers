//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3FullscreenCustomEffect-Protocol.h"
#import "SCTV3FullscreenDraggableGesture-Protocol.h"

@class NSString, SCTRoundCornerView, SCTV3FullscreenDragStage, UIView;
@protocol SCTV3FullscreenPreviewWithConstraints;

@interface SCTV3FullscreenCustomEffect : NSObject <SCTV3FullscreenDraggableGesture, SCTV3FullscreenCustomEffect>
{
    id <SCTV3FullscreenPreviewWithConstraints> _fullscreenPreview;
    SCTRoundCornerView *_roundDismissView;
    struct CGRect _initialRect;
    struct CGRect _targetCircleRect;
    UIView *_gestureReceivingView;
    _Bool _dismissFullscreen;
    SCTV3FullscreenDragStage *_stageOne;
    SCTV3FullscreenDragStage *_stageTwo;
    unsigned long long _currentStage;
}

- (void).cxx_destruct;
- (void)_handleCustomGesture:(double)arg1;
- (struct CGPoint)_stageOneTargetCoordinates;
- (double)_stageOneTargetSize;
@property(nonatomic) unsigned long long currentStage; // @synthesize currentStage=_currentStage;
- (void)didLayoutSubviews;
- (id)initWithFullscreenPreview:(id)arg1;
- (void)onDragGestureBegin:(struct CGPoint)arg1;
- (void)onDragGestureChange:(struct CGPoint)arg1;
- (_Bool)onDragGestureEnd;
- (void)removePreviewWhileOnFullscreenWithCompletion:(CDUnknownBlockType)arg1;
- (id)roundDismissView;
- (void)setupWithGestureReceivingView:(id)arg1;
- (void)setupWithGestureReceivingView:(id)arg1 subviewToMask:(id)arg2;
- (void)updateDragTargetCircleFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
