//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, SCQueuePerformer, UIImageView, UIVisualEffectView;

@interface SCOperaPageBackdropView : UIView
{
    UIImageView *_backdropImageView;
    UIVisualEffectView *_backdropBlurView;
    CAGradientLayer *_backdropGradientLayer;
    SCQueuePerformer *_performer;
    long long _type;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackdropImage:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end

