//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCMapHintArrowView, SCMapHintExpandingLabel, UILabel;

@interface SCMapHintTitleView : UIView
{
    _Bool _animating;
    _Bool _visible;
    SCMapHintExpandingLabel *_titleLabel;
    UILabel *_detailTitleLabel;
    SCMapHintArrowView *_arrowView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) SCMapHintArrowView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *detailTitleLabel; // @synthesize detailTitleLabel=_detailTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void)layoutSubviews;
@property(retain, nonatomic) SCMapHintExpandingLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
