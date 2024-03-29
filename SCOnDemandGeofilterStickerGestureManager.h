//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCOnDemandGeofilterStickerView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface SCOnDemandGeofilterStickerGestureManager : NSObject <UIGestureRecognizerDelegate>
{
    SCOnDemandGeofilterStickerView *_sticker;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    double _cumulativeRotation;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSticker:(id)arg1;
- (void)pan:(id)arg1;
- (void)pinch:(id)arg1;
- (void)rotation:(id)arg1;
- (void)tap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

