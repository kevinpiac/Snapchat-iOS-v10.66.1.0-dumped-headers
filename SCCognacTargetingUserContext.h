//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCognacTargetingDevice;

@interface SCCognacTargetingUserContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) SCCognacTargetingDevice *device; // @dynamic device;
@property(nonatomic) _Bool hasDevice; // @dynamic hasDevice;
@property(copy, nonatomic) NSString *localeCode; // @dynamic localeCode;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(nonatomic) int xtmlLocaleCode; // @dynamic xtmlLocaleCode;

@end
