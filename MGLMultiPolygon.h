//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLShape.h"

#import "MGLOverlay-Protocol.h"

@class NSArray, NSString;

@interface MGLMultiPolygon : MGLShape <MGLOverlay>
{
    struct MGLCoordinateBounds _overlayBounds;
    NSArray *_polygons;
}

+ (id)multiPolygonWithPolygons:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoJSONDictionary;
- (geometry_0b6042fd)geometryObject;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolygons:(id)arg1;
- (_Bool)intersectsOverlayBounds:(struct MGLCoordinateBounds)arg1;
- (_Bool)isEqual:(id)arg1;
- (multi_polygon_951adcca)multiPolygon;
@property(readonly, nonatomic) struct MGLCoordinateBounds overlayBounds; // @synthesize overlayBounds=_overlayBounds;
@property(copy, nonatomic) NSArray *polygons; // @synthesize polygons=_polygons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
