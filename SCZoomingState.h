//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCZoomingState : NSObject
{
    double _initialScale;
    double _linearScale;
    double _exponentialScale;
    double _totalOffsetForExpScale;
}

- (double)_calculateExponentialScaleWithRelativeOffset:(double)arg1;
- (double)_calculateRelativeOffsetWithExponentialScale:(double)arg1;
- (void)_clampScale:(double *)arg1;
- (double)_scaleChangeForOffset:(double)arg1;
@property(readonly, nonatomic) double effectiveScale;
@property(nonatomic) double exponentialScale; // @synthesize exponentialScale=_exponentialScale;
- (id)init;
@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) double linearScale; // @synthesize linearScale=_linearScale;
- (void)reset;
@property(nonatomic) double totalOffsetForExpScale; // @synthesize totalOffsetForExpScale=_totalOffsetForExpScale;

@end

