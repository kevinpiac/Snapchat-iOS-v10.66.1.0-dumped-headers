//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCShapeView;
@protocol SCRequestPermissionPromptViewDataSource, SCRequestPermissionPromptViewDelegate;

@interface SCRequestPermissionPromptView : UIView
{
    SCShapeView *_backgroundView;
    id <SCRequestPermissionPromptViewDelegate> _delegate;
    id <SCRequestPermissionPromptViewDataSource> _dataSource;
}

- (void).cxx_destruct;
- (void)_didPressAllowButton;
- (void)_didPressNotNowButton;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (void)layoutSubviews;

@end
