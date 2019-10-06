//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSALocationDataProviderProtocol-Protocol.h"

@class CLLocationManager, NSString;

@interface LSALocationDataProvider : NSObject <LSALocationDataProviderProtocol>
{
    CLLocationManager *_locationManager;
}

- (void).cxx_destruct;
- (id)location;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)startLocationUpdates:(id)arg1;
- (void)stopLocationUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

