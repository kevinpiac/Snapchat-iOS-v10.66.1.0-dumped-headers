//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGrowingButton.h"

@class UIView;

@interface SCLensSideButton : SCGrowingButton
{
    UIView *_badgeView;
    _Bool _badged;
}

- (void).cxx_destruct;
- (void)_animateImageViewCrossDissolveWithAnimations:(CDUnknownBlockType)arg1;
- (void)_updateImageViewInsets;
- (id)badgeView;
@property(nonatomic) _Bool badged; // @synthesize badged=_badged;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setImage:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;

@end

