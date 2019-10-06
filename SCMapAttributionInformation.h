//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCMapAttributionInformation : NSObject
{
    NSString *_placeName;
    double _zoom;
    double _bearing;
    double _pitch;
    struct CLLocationCoordinate2D _center;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double bearing; // @synthesize bearing=_bearing;
@property(readonly, nonatomic) struct CLLocationCoordinate2D center; // @synthesize center=_center;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 placeName:(id)arg3 bearing:(double)arg4 pitch:(double)arg5;
@property(readonly, nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(readonly, copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(readonly, nonatomic) double zoom; // @synthesize zoom=_zoom;

@end

