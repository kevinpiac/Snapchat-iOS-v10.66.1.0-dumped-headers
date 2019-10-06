//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCS2Polygon : NSObject
{
    struct S2Polygon *_s2Polygon;
}

+ (_Bool)intersects:(id)arg1 withPolygon:(id)arg2;
+ (id)polygonFromIntersectionOf:(id)arg1 withPolygon:(id)arg2;
- (double)area;
- (_Bool)contains:(id)arg1;
- (void)dealloc;
- (struct S2Polygon *)getS2Polygon;
- (id)initWithGeofilterPolygon:(id)arg1;

@end
