//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, SCImpalaBusinessLogoView;

@interface SCImpalaAddToStoryBusinessLogoView : UIView
{
    UIView *_addToStoryIconView;
    CAShapeLayer *_addToStoryIconViewMaskLayer;
    CAShapeLayer *_businessLogoViewMaskLayer;
    SCImpalaBusinessLogoView *_businessLogoView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCImpalaBusinessLogoView *businessLogoView; // @synthesize businessLogoView=_businessLogoView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool showAddToStoryIcon;

@end

