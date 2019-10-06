//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapLoggerSessionUserLocationProviding-Protocol.h"

@class NSString, SCLocationSharingPreferencesV1;
@protocol SCLocationProvider;

@interface SCMapLoggerSessionUserLocationProvider : NSObject <SCMapLoggerSessionUserLocationProviding>
{
    id <SCLocationProvider> _locationProvider;
    SCLocationSharingPreferencesV1 *_locationSharingPreferences;
}

- (void).cxx_destruct;
- (_Bool)ghostMode;
- (id)initWithLocationProvider:(id)arg1 locationSharingPreferences:(id)arg2;
- (id)userLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

