//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCXAnimation;

@interface SCXRenderablePath : NSObject
{
    _Bool _isWestToEast;
    unsigned long long _style;
    SCXAnimation *_travelAnimation;
    struct CLLocationCoordinate2D _startCoordinate;
    struct CLLocationCoordinate2D _endCoordinate;
}

- (void).cxx_destruct;
- (struct CGPoint)_endPointInMapViewport:(id)arg1 mapView:(id)arg2;
- (struct CGPoint)_startPointInMapViewport:(id)arg1 mapView:(id)arg2;
- (void)_tryEnd:(id *)arg1 now:(double)arg2;
- (void)endCompletedAnimations;
@property(readonly, nonatomic) struct CLLocationCoordinate2D endCoordinate; // @synthesize endCoordinate=_endCoordinate;
- (id)initWithStartCoordinate:(struct CLLocationCoordinate2D)arg1 endCoordinate:(struct CLLocationCoordinate2D)arg2 style:(unsigned long long)arg3;
- (_Bool)isMaybeVisibleInMapViewport:(id)arg1 mapView:(id)arg2;
- (float)presentationLengthRatio;
- (CDStruct_f9662865)screenPointsInMapViewport:(id)arg1 mapView:(id)arg2;
@property(retain, nonatomic) SCXAnimation *travelAnimation; // @synthesize travelAnimation=_travelAnimation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D startCoordinate; // @synthesize startCoordinate=_startCoordinate;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;

@end

