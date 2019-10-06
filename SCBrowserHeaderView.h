//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, SCGradientView, UIButton, UILabel;
@protocol SCBrowserHeaderViewDelegate;

@interface SCBrowserHeaderView : UIView
{
    UILabel *_titleLabel;
    UIButton *_dismissButton;
    SCGradientView *_shimmerView;
    NSTimer *_shimmerTimer;
    _Bool _shimmering;
    id <SCBrowserHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_dismissTapped;
@property(nonatomic) __weak id <SCBrowserHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool shimmering; // @synthesize shimmering=_shimmering;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

