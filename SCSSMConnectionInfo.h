//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSSMConnectionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long bandwidthBps; // @dynamic bandwidthBps;
@property(copy, nonatomic) NSString *carrier; // @dynamic carrier;
@property(copy, nonatomic) NSString *carrierMccMnc; // @dynamic carrierMccMnc;
@property(copy, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(nonatomic) int connectionType; // @dynamic connectionType;

@end

