//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate;

@interface SCVenueFetchConstraint : NSObject <NSCopying>
{
    double _radius;
    NSDate *_expirationDate;
    struct CLLocationCoordinate2D _centerCoordinate;
}

+ (id)withSCMECheckinLocationsConstraint:(id)arg1;
- (void).cxx_destruct;
- (_Bool)allowFetchForCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (unsigned long long)hash;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 expirationDate:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;

@end

