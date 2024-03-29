//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "SCShakeScreenRecorderDelegate-Protocol.h"
#import "UIWindowScreenshotSkipping-Protocol.h"

@class NSString, SCShakeScreenRecorder, UIButton, UIView, UIViewController;
@protocol SCShakeScreenRecordingMenuWindowDelegate;

@interface SCShakeScreenRecordingMenuWindow : UIWindow <SCShakeScreenRecorderDelegate, UIWindowScreenshotSkipping>
{
    UIButton *_recordButton;
    UIButton *_cancelButton;
    UIView *_progressBar;
    SCShakeScreenRecorder *_recorder;
    id <SCShakeScreenRecordingMenuWindowDelegate> _delegate;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_startCapture;
- (void)cancelButtonPressed;
@property(nonatomic) id <SCShakeScreenRecordingMenuWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)shakeScreenRecorder:(id)arg1 didRecordVideoLength:(double)arg2;
- (void)show;
- (void)stopRecordButtonPressed;
- (void)takeButtonPressed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

