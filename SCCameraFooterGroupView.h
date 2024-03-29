//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, SCCameraBarButtonBlurView, UIImageView, UILabel;

@interface SCCameraFooterGroupView : UIView
{
    NSArray *_items;
    NSString *_title;
    long long _titleAlignment;
    SCCameraBarButtonBlurView *_blurView;
    UIImageView *_shadowImageView;
    UILabel *_titleLabel;
    NSArray *_lineSeparators;
    long long _visibleItemCount;
    struct CGSize _previousBoundsSize;
}

- (void).cxx_destruct;
- (void)_addItems:(id)arg1;
- (double)_buttonWidth;
- (_Bool)_isItemVisible:(id)arg1;
- (void)_reloadLineSeparators;
- (void)_removeItems:(id)arg1;
- (void)_resetBlurMask;
- (void)_updateTitleLabel;
- (void)_updateVisibleItems;
- (long long)_visibleItemCount;
@property(retain, nonatomic) SCCameraBarButtonBlurView *blurView; // @synthesize blurView=_blurView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateLayout;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layoutSubviews;
@property(retain, nonatomic) NSArray *lineSeparators; // @synthesize lineSeparators=_lineSeparators;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

