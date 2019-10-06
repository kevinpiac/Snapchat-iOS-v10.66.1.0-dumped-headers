//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SIGTabBarViewItemViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SIGTabBarSelectionView, UILayoutGuide, UIScrollView;

@interface SIGTabBarView : UIView <SIGTabBarViewItemViewDelegate>
{
    UIScrollView *_scrollView;
    NSArray *_itemViews;
    SIGTabBarSelectionView *_selection;
    NSArray *_tabLayoutConstraints;
    double _frameWidthDuringLastLayout;
    UILayoutGuide *_centeringGuide;
    NSLayoutConstraint *_centeringGuideWidthConstraint;
    unsigned long long _theme;
}

- (void).cxx_destruct;
- (void)SIGTabBarViewItemViewDidBecomeSelected:(id)arg1 viaUserInteraction:(_Bool)arg2;
- (id)_constraintsToSpaceTabs:(double)arg1;
- (void)_enableScrollingWithWidth:(double)arg1;
- (id)_layoutTabsForScrolling;
- (id)_layoutTabsOfTotalWidth:(double)arg1 equallyWithSpacing:(double)arg2;
- (void)_recalculateTabLayouts;
- (void)_select:(id)arg1 animated:(_Bool)arg2;
- (id)initWithItems:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

