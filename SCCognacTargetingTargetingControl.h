//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCCognacTargetingGeoBlacklist, SCCognacTargetingGeoControl, SCCognacTargetingUserControl;

@interface SCCognacTargetingTargetingControl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCognacTargetingGeoBlacklist *geoBlacklist; // @dynamic geoBlacklist;
@property(retain, nonatomic) SCCognacTargetingGeoControl *geoControl; // @dynamic geoControl;
@property(nonatomic) _Bool hasGeoBlacklist; // @dynamic hasGeoBlacklist;
@property(nonatomic) _Bool hasGeoControl; // @dynamic hasGeoControl;
@property(nonatomic) _Bool hasUserControl; // @dynamic hasUserControl;
@property(retain, nonatomic) SCCognacTargetingUserControl *userControl; // @dynamic userControl;

@end

