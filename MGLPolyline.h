//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLMultiPoint.h"

#import "MGLOverlay-Protocol.h"

@class NSString;

@interface MGLPolyline : MGLMultiPoint <MGLOverlay>
{
}

+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (variant_9da3b8f0)annotationObjectWithDelegate:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (double)direction:(struct MGLRadianCoordinate2D)arg1 to:(struct MGLRadianCoordinate2D)arg2;
- (id)geoJSONDictionary;
- (geometry_0b6042fd)geometryObject;
- (_Bool)isEqual:(id)arg1;
- (double)length;
- (line_string_a102dafb)lineString;
- (id)mgl_coordinates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct MGLCoordinateBounds overlayBounds; // @dynamic overlayBounds;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

