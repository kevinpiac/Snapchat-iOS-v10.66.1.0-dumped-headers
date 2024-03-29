//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCFriendLocationSnapshotMapLocation : NSObject <NSCopying>
{
    double _latitude;
    double _longitude;
    double _zoomLevel;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 zoomLevel:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;

@end

