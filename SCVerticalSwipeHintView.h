//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCVerticalSwipeHintArrowView, UILabel;

@interface SCVerticalSwipeHintView : UIView
{
    long long _direction;
    _Bool _arrowVisible;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SCVerticalSwipeHintArrowView *_arrowView;
}

- (void).cxx_destruct;
- (void)_animateWithDuration:(double)arg1 options:(unsigned long long)arg2 overlap:(double)arg3 animations:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_initializeSubviews;
- (void)_makeTransformOffsetForView:(id)arg1;
- (double)_originXForCenteredView:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDirection:(long long)arg1 arrowVisible:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSubtitleAttributedText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleAttributedText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;

@end

