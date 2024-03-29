//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchIntent-Protocol.h"

@class NSString;

@interface SCMapSearchGoToCoordinateIntent : NSObject <SCSearchIntent>
{
    _Bool _useCoordinateBounds;
    _Bool _dropPin;
    double _zoomLevel;
    NSString *_title;
    NSString *_poiId;
    struct CLLocationCoordinate2D _coordinate;
    struct SCMapCoordinateBounds _coordinateBounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) struct SCMapCoordinateBounds coordinateBounds; // @synthesize coordinateBounds=_coordinateBounds;
@property(readonly, nonatomic) _Bool dropPin; // @synthesize dropPin=_dropPin;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 coordinateBounds:(struct SCMapCoordinateBounds)arg3 useCoordinateBounds:(_Bool)arg4 title:(id)arg5 dropPin:(_Bool)arg6 poiId:(id)arg7;
@property(readonly, copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool useCoordinateBounds; // @synthesize useCoordinateBounds=_useCoordinateBounds;
@property(readonly, nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

