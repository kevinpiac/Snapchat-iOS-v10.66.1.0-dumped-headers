//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCFeatureWidenedFOVImplZoomLevel : NSObject
{
    double _zoomLevel;
}

- (void)addScale:(double)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool isDisablingThresholdExceeded;
@property(readonly, nonatomic) _Bool isEnablingThresholdExceeded;
@property(readonly, nonatomic) _Bool isZoomLevelNeutralOrGreater;
- (void)reset;
@property(readonly, nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;

@end

