//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIButton, UILabel, UIProgressView;
@protocol SCProgressOverlayViewDelegate;

@interface SCProgressOverlayView : UIView
{
    UIView *_contentView;
    UILabel *_label;
    UIView *_footerView;
    UIButton *_cancelButton;
    UIProgressView *_progressView;
    _Bool _cancellable;
    id <SCProgressOverlayViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didPressCancelButton;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(nonatomic) _Bool cancellable; // @synthesize cancellable=_cancellable;
@property(nonatomic) _Bool contentsHidden;
@property(nonatomic) __weak id <SCProgressOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) float progress;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;

@end

