//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIButton;
@protocol SCBugReportScreenshotMenuWindowDelegate;

@interface SCBugReportScreenshotMenuWindow : UIWindow
{
    UIButton *_takeButton;
    UIButton *_cancelButton;
    id <SCBugReportScreenshotMenuWindowDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)cancelButtonPressed;
- (void)hide;
- (id)init;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)show;
- (void)takeButtonPressed;

@end

