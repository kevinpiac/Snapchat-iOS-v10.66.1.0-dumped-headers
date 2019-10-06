//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILayoutGuide;

@interface SIGContainer : UIView
{
    UIView *_background;
    UIView *_verticalBorder;
    UIView *_horizontalBorder;
    struct UIEdgeInsets _insets;
    UILayoutGuide *_contentGuide;
    NSLayoutConstraint *_contentGuideTopConstraint;
    NSLayoutConstraint *_contentGuideBottomConstraint;
    NSLayoutConstraint *_contentGuideLeftConstraint;
    NSLayoutConstraint *_contentGuideRightConstraint;
    UIView *_contentView;
    struct SIGContainerStyle _style;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)initWithContentView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) struct SIGContainerStyle style; // @synthesize style=_style;

@end

