//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCExpandedButton, SCPreviewTooltipBalloon, UIButton, UILabel;
@protocol SCFailedStoryPostDelegate;

@interface SCFailedStoryPostBalloonView : UIView
{
    SCPreviewTooltipBalloon *_toolTipBalloon;
    UIView *_containerView;
    UILabel *_failedToPostLabel;
    SCExpandedButton *_retryButton;
    UIButton *_dismissButton;
    unsigned long long _failedStoryPostCount;
    id <SCFailedStoryPostDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_retryTapped:(id)arg1;
- (struct CGSize)contentSize;
@property(nonatomic) __weak id <SCFailedStoryPostDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFailedStoryPostCount:(unsigned long long)arg1;
- (void)setTrianglePosition:(long long)arg1 withOffset:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

