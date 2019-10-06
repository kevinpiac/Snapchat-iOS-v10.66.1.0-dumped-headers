//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class UIViewPropertyAnimator, UIVisualEffect;

@interface SCVisualEffectView : UIVisualEffectView
{
    UIVisualEffect *_visualEffect;
    UIViewPropertyAnimator *_propertyAnimator;
    double _intensity;
}

- (void).cxx_destruct;
- (void)_setupPropertyAnimator;
- (id)initWithEffect:(id)arg1;
- (id)initWithEffect:(id)arg1 intensity:(double)arg2;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;

@end

