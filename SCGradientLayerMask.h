//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIView;

@interface SCGradientLayerMask : CALayer
{
    UIView *_view;
    struct CGGradient *_gradient;
    struct CGPoint _viewStartPoint;
    struct CGPoint _viewEndPoint;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg1;
@property(nonatomic) struct CGGradient *gradient; // @synthesize gradient=_gradient;
- (id)initWithView:(id)arg1 viewStartPoint:(struct CGPoint)arg2 viewEndPoint:(struct CGPoint)arg3;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) struct CGPoint viewEndPoint; // @synthesize viewEndPoint=_viewEndPoint;
@property(nonatomic) struct CGPoint viewStartPoint; // @synthesize viewStartPoint=_viewStartPoint;
- (void)updateLayoutFromView;

@end

