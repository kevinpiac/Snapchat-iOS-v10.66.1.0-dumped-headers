//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLBeaconRegion, CLHeading, CLLocation, NSArray, NSError;
@protocol SCLocationProvider;

@protocol SCLocationListener <NSObject>

@optional
- (void)locationProvider:(id <SCLocationProvider>)arg1 didRecieveError:(NSError *)arg2;
- (void)locationProvider:(id <SCLocationProvider>)arg1 didUpdateAuthorization:(int)arg2;
- (void)locationProvider:(id <SCLocationProvider>)arg1 didUpdateBeacons:(NSArray *)arg2 inRegion:(CLBeaconRegion *)arg3;
- (void)locationProvider:(id <SCLocationProvider>)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationProvider:(id <SCLocationProvider>)arg1 didUpdateLocation:(CLLocation *)arg2;
@end

