//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCMapboxCameraUtil : NSObject
{
}

+ (_Bool)_mapCamera:(id)arg1 isEqualToCamera:(id)arg2 ignoreAltitude:(_Bool)arg3;
+ (void)centerMap:(id)arg1 bounds:(struct MGLCoordinateBounds)arg2 duration:(double)arg3 edgePadding:(struct UIEdgeInsets)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)centerMap:(id)arg1 bounds:(struct MGLCoordinateBounds)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)centerMap:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 edgePadding:(struct UIEdgeInsets)arg4 duration:(double)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)flyToCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 mapView:(id)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)flyToCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 mapView:(id)arg3 duration:(double)arg4 edgePadding:(struct UIEdgeInsets)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)flyToCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 pitch:(double)arg3 mapView:(id)arg4 duration:(double)arg5 edgePadding:(struct UIEdgeInsets)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)flyToCoordinateBounds:(struct MGLCoordinateBounds)arg1 mapView:(id)arg2 duration:(double)arg3 edgePadding:(struct UIEdgeInsets)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)flyToCoordinateBounds:(struct MGLCoordinateBounds)arg1 pitch:(double)arg2 mapView:(id)arg3 duration:(double)arg4 edgePadding:(struct UIEdgeInsets)arg5 completion:(CDUnknownBlockType)arg6;

@end

