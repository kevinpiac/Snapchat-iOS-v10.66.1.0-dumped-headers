//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MGLMapView, NSString;

@interface MGLSource : NSObject
{
    unique_ptr_b6920a88 _pendingSource;
    NSString *_identifier;
    struct Source *_rawSource;
    MGLMapView *_mapView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addToMapView:(id)arg1;
- (id)description;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithPendingSource:(unique_ptr_b6920a88)arg1;
- (id)initWithRawSource:(struct Source *)arg1 mapView:(id)arg2;
@property(readonly, nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) struct Source *rawSource; // @synthesize rawSource=_rawSource;
- (void)removeFromMapView:(id)arg1;

@end

