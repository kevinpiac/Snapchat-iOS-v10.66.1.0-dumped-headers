//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREAppInfo, SCSCOREConnectionInfo, SCSCOREDeviceInfo, SCSCOREGeoLocation, SCSCOREUUID;

@interface SCSRRClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCOREAppInfo *appInfo; // @dynamic appInfo;
@property(retain, nonatomic) SCSCOREConnectionInfo *connectionInfo; // @dynamic connectionInfo;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) SCSCOREDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(nonatomic) _Bool hasAppInfo; // @dynamic hasAppInfo;
@property(nonatomic) _Bool hasConnectionInfo; // @dynamic hasConnectionInfo;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) SCSCOREGeoLocation *location; // @dynamic location;
@property(retain, nonatomic) SCSCOREUUID *userId; // @dynamic userId;

@end

