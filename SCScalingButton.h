//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImage, UIImageView, UILongPressGestureRecognizer;

@interface SCScalingButton : UIView <UIGestureRecognizerDelegate>
{
    _Bool _recognizesGesturesSimultaneously;
    _Bool _useConstraintsForImage;
    _Bool _onlyScaleImage;
    _Bool _pressed;
    _Bool _enabled;
    UIImage *_image;
    UIImageView *_imageView;
    double _pressDownScale;
    double _pressDownAdditionalScale;
    double _pressUpScale;
    long long _imageViewContentMode;
    UIView *_extraAnimationView;
    NSString *_imageName;
    SEL _action;
    UILongPressGestureRecognizer *_longPressGesture;
    id _target;
    struct CGSize _imageInset;
    struct UIEdgeInsets _touchTargetInsets;
}

- (void).cxx_destruct;
- (void)_pressDownAnimate;
- (void)_pressUpAnimate;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)animate;
- (void)animateButtonSizeScale:(double)arg1 alpha:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelExistingTransformAnimationsIfNeeded;
@property(retain, nonatomic) UIView *extraAnimationView; // @synthesize extraAnimationView=_extraAnimationView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGSize imageInset; // @synthesize imageInset=_imageInset;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode=_imageViewContentMode;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)interruptGestures;
- (_Bool)isAccessibilityElement;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
- (void)layoutSubviews;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) _Bool onlyScaleImage; // @synthesize onlyScaleImage=_onlyScaleImage;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)press:(id)arg1;
@property(nonatomic) double pressDownAdditionalScale; // @synthesize pressDownAdditionalScale=_pressDownAdditionalScale;
@property(nonatomic) double pressDownScale; // @synthesize pressDownScale=_pressDownScale;
@property(nonatomic) double pressUpScale; // @synthesize pressUpScale=_pressUpScale;
@property(nonatomic) _Bool recognizesGesturesSimultaneously; // @synthesize recognizesGesturesSimultaneously=_recognizesGesturesSimultaneously;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) struct UIEdgeInsets touchTargetInsets; // @synthesize touchTargetInsets=_touchTargetInsets;
@property(nonatomic) _Bool useConstraintsForImage; // @synthesize useConstraintsForImage=_useConstraintsForImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

