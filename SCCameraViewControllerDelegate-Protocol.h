//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCameraViewController, UILongPressGestureRecognizer, UIView;

@protocol SCCameraViewControllerDelegate <NSObject>
- (void)leftCameraBackButtonPressed;

@optional
- (void)cameraViewController:(SCCameraViewController *)arg1 didPerformCameraLongPressGestureWithProfilePresented:(UILongPressGestureRecognizer *)arg2;
- (void)cameraViewController:(SCCameraViewController *)arg1 didUpdateCameraType:(long long)arg2;
- (void)didBeginLongPressing:(_Bool)arg1;
- (void)didBeginRecording;
- (void)didEndLongPressing:(_Bool)arg1;
- (void)didLensesDetected:(_Bool)arg1;
- (_Bool)isAppInLowPowerMode:(SCCameraViewController *)arg1;
- (UIView *)mainSuperview;
- (UIView *)profileButtonView:(SCCameraViewController *)arg1;
- (void)setNonRecordingUIEnabled:(_Bool)arg1;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3 showStatusBar:(_Bool)arg4;
- (void)toggleSearchBarAndBitmojiVisibility:(_Bool)arg1;
- (void)toggleTimerMode:(_Bool)arg1;
- (void)updateHovaTabBarLayout:(_Bool)arg1 useDarkMode:(_Bool)arg2;
- (void)updateHovaTabBarVisibility:(double)arg1;
@end
