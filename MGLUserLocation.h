//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MGLAnnotation-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CLHeading, CLLocation, MGLMapView, NSString;

@interface MGLUserLocation : NSObject <MGLAnnotation, NSSecureCoding>
{
    CLLocation *_location;
    CLHeading *_heading;
    NSString *_title;
    NSString *_subtitle;
    MGLMapView *_mapView;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingCoordinate;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapView:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isUpdating) _Bool updating;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
- (void)setHeading:(id)arg1;
- (void)setLocation:(id)arg1;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
