//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCameraLensesEventListener-Protocol.h"
#import "SCFeatureCameraTooltipContender-Protocol.h"

@class UIGestureRecognizer;
@protocol SCSwipeViewParentDelegate, UIGestureRecognizerDelegate;

@protocol SCFeatureLensExplorerSwipeUp <SCCameraLensesEventListener, SCFeatureCameraTooltipContender>
- (void)addBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg1;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizersDelegate;
- (_Bool)isPanUpGestureRecognizer:(UIGestureRecognizer *)arg1;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> swipeViewParentDelegate;
@end

