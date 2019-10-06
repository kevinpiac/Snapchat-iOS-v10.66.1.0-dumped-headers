//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOJUUnlockablesOndemandOfferedInventory;

@interface SCOnDemandGeofilterGeofenceUtil : NSObject
{
    SOJUUnlockablesOndemandOfferedInventory *_offeredInventory;
    double _earthRadiusInMeters;
    double _minGeofenceAreaInSquareMeters;
    double _maxGeofenceAreaInSquareMeters;
}

- (void).cxx_destruct;
- (double)_polarTriangleArea:(double)arg1 lng1:(double)arg2 tan2:(double)arg3 lng2:(double)arg4;
- (double)_toRadians:(double)arg1;
- (double)computeSignedArea:(id)arg1;
- (double)distanceBetweenCoordinateA:(id)arg1 locationB:(id)arg2;
- (id)initWithOfferedInventory:(id)arg1;
- (unsigned long long)validateGeofenceSize:(id)arg1;

@end

