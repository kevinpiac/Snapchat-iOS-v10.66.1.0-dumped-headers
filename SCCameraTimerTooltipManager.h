//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraTimerTooltipManaging-Protocol.h"

@class NSString, SCPreviewTooltipBalloon, UIView;

@interface SCCameraTimerTooltipManager : NSObject <SCCameraTimerTooltipManaging>
{
    UIView *_cameraTimerView;
    UIView *_takeASnapTooltipView;
    SCPreviewTooltipBalloon *_multiSnapTooltip;
    _Bool _suppressTooltips;
}

- (void).cxx_destruct;
- (void)hideMultiSnapTooltip;
- (void)hideTakeASnapTooltipAnimated:(_Bool)arg1;
- (id)initWithCameraTimerView:(id)arg1;
- (_Bool)isTakeASnapTooltipVisible;
@property(nonatomic) _Bool suppressTooltips; // @synthesize suppressTooltips=_suppressTooltips;
- (void)showMultiSnapTooltip;
- (void)showTakeASnapTooltipView:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView *takeASnapTooltipView; // @synthesize takeASnapTooltipView=_takeASnapTooltipView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

