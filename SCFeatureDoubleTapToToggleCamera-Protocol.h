//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIGestureRecognizer;
@protocol SCFeatureDoubleTapToToggleCameraDelegate;

@protocol SCFeatureDoubleTapToToggleCamera
- (void)addBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg1;
@property(nonatomic) __weak id <SCFeatureDoubleTapToToggleCameraDelegate> delegate;
- (_Bool)isDoubleTapGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)reset;
@end
