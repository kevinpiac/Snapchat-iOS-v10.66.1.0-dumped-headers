//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGrowingButton.h"

@class UILabel;

@interface SCLabeledGrowingButton : SCGrowingButton
{
    UILabel *_label;
}

- (void).cxx_destruct;
- (struct CGRect)_labelFrame;
- (void)configureLabelWithText:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;

@end

