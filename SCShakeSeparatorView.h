//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SCShakeSeparatorView : UIView
{
    UIView *_leftLine;
    UIView *_rightLine;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)_setupLabel;
- (id)_setupLine;
- (void)_setupLines;
- (void)_updateConstraintsForLine:(id)arg1 leftAligned:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)updateConstraints;

@end
