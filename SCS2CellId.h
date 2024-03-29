//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCS2CellId : NSObject <NSCopying>
{
    struct S2CellId _s2CellId;
}

+ (id)cellIdForLatLong:(struct CLLocationCoordinate2D)arg1;
+ (id)cellIdForLatLong:(struct CLLocationCoordinate2D)arg1 atLevel:(int)arg2;
+ (id)cellIdForToken:(id)arg1;
+ (int)levelForAccuracy:(double)arg1 minLevel:(int)arg2 maxLevel:(int)arg3;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)edgeNeighbors;
- (unsigned long long)getId;
- (struct S2CellId)getS2CellId;
- (unsigned long long)hash;
- (id)initWithS2CellId:(struct S2CellId)arg1;
- (_Bool)isEqual:(id)arg1;
- (struct CLLocationCoordinate2D)latlng;
- (int)level;
- (id)parent;
- (id)parentAtLevel:(int)arg1;
- (void)setId:(struct S2CellId)arg1;
- (id)token;

@end

