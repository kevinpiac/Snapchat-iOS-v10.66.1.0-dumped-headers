//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCShapeView;

@interface SCPreviewToolbarTooltipView : UIView
{
    SCShapeView *_shapeView;
    _Bool _visible;
    _Bool _isNewAnimatedTooltip;
    NSString *_title;
    long long _displayCount;
}

- (void).cxx_destruct;
- (void)dismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) long long displayCount; // @synthesize displayCount=_displayCount;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isNewAnimatedTooltip; // @synthesize isNewAnimatedTooltip=_isNewAnimatedTooltip;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void)layoutSubviews;
- (id)presentAnimatedCaptionTooltipForItem:(id)arg1;
- (id)presentAnimatedDrawTooltipForItem:(id)arg1;
- (id)presentAnimatedLensTooltipForItem:(id)arg1;
- (id)presentAnimatedStickerTooltipForItem:(id)arg1;
- (void)presentFromToolbarButtonItem:(id)arg1 inView:(id)arg2;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stopTooltipAnimation;

@end

