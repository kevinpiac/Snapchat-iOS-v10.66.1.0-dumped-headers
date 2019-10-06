//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLHeading, CLLocation, NSArray, SCLocationListenerAnnouncer;
@protocol SCLocationRequest, SCObserving;

@protocol SCLocationProvider <NSObject>
- (NSArray *)beacons;
- (_Bool)hasAuthorizationStatus;
- (_Bool)hasRecentAuthorizationStatus;
- (CLHeading *)heading;
- (int)lastAuthorizationStatus;
- (_Bool)lastAuthorized;
- (CLLocation *)location;
- (SCLocationListenerAnnouncer *)locationAnnouncer;
- (id <SCObserving>)requestActiveLocationUpdatesWithRequest:(id <SCLocationRequest>)arg1;
@end
