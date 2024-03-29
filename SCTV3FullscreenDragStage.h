//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCTDimensions;

@interface SCTV3FullscreenDragStage : NSObject
{
    struct CGRect _initialRect;
    double _initialRadius;
    SCTDimensions *_width;
    SCTDimensions *_height;
    SCTDimensions *_x;
    SCTDimensions *_y;
    SCTDimensions *_radius;
}

- (void).cxx_destruct;
- (struct CGPoint)coordinatesForNormalizedProgress:(double)arg1;
- (id)initWithRect:(struct CGRect)arg1 radius:(double)arg2;
- (double)radiusForNormalizedProgress:(double)arg1;
- (void)setTargetCoordinates:(struct CGPoint)arg1;
- (void)setTargetRadius:(double)arg1;
- (void)setTargetSize:(struct CGSize)arg1;
- (struct CGSize)sizeForNormalizedProgress:(double)arg1;
- (double)targetRadius;
- (struct CGRect)targetRect;

@end

