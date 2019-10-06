//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCUserSession, UIScrollView, UIView;
@protocol SCMediaDrawerItem, SCMediaDrawerTabControllerDelegate;

@protocol SCMediaDrawerTabController <NSObject>
- (void)animateDeselectAll;
- (void)animateDeselectDrawerItem:(id <SCMediaDrawerItem>)arg1 isDeselectingLastItem:(_Bool)arg2;
- (void)animateSelectingDrawerItem:(id <SCMediaDrawerItem>)arg1;
@property(nonatomic) __weak id <SCMediaDrawerTabControllerDelegate> delegate;
- (void)didFocusOnTab;
- (id)initWithUserSession:(SCUserSession *)arg1 delegate:(id <SCMediaDrawerTabControllerDelegate>)arg2;
@property(readonly, nonatomic) long long itemType;
- (NSArray *)itemsInScrollViewRect:(struct CGRect)arg1;
- (void)scrollToDrawerItem:(id <SCMediaDrawerItem>)arg1;
- (void)scrollToPercent:(double)arg1;
- (void)scrollToTopWithTopMargin:(double)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)tabCellWillDisplay;
- (void)updateScrollViewWithTopMargin:(double)arg1 deltaContentOffset:(double)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic) UIView *view;
@end
