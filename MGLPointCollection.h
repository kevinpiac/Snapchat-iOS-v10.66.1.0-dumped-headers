//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLShape.h"

#import "MGLOverlay-Protocol.h"

@class NSString;

@interface MGLPointCollection : MGLShape <MGLOverlay>
{
    struct optional<mbgl::LatLngBounds> _bounds;
    vector_896d67e1 _coordinates;
}

+ (id)pointCollectionWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D *coordinates;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoJSONDictionary;
- (geometry_0b6042fd)geometryObject;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (_Bool)intersectsOverlayBounds:(struct MGLCoordinateBounds)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct MGLCoordinateBounds overlayBounds;
@property(readonly, nonatomic) unsigned long long pointCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

