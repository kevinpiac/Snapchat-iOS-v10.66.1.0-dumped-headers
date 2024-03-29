//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOverscrolling-Protocol.h"
#import "UIAccessibilityIdentification-Protocol.h"

@class NSString, SCPreviewTooltipBalloon, UIColor, UIImage, UIView;

@interface SCNavigationBarButtonItem : NSObject <SCOverscrolling, UIAccessibilityIdentification>
{
    _Bool _viewLoaded;
    double _width;
    UIImage *_image;
    NSString *_title;
    SCPreviewTooltipBalloon *_tooltip;
    UIView *_shadowView;
    UIView *_view;
    NSString *_imageName;
    SEL _action;
    id _target;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityIdentifier;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) double alpha;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 imageName:(id)arg2 title:(id)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(nonatomic, getter=isViewLoaded) _Bool viewLoaded; // @synthesize viewLoaded=_viewLoaded;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UIColor *tintColor;
@property(retain, nonatomic) SCPreviewTooltipBalloon *tooltip; // @synthesize tooltip=_tooltip;
- (void)setTransform:(struct CGAffineTransform)arg1;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) double width; // @synthesize width=_width;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateInteractiveTransition:(double)arg1 shouldScale:(_Bool)arg2;
- (void)updatePercentOverscrolled:(double)arg1;
- (void)viewTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

