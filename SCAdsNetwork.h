//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SCAdsNetwork : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *carrier; // @dynamic carrier;
@property(copy, nonatomic) NSData *clientIp; // @dynamic clientIp;
@property(nonatomic) int connectionType; // @dynamic connectionType;
@property(nonatomic) long long kiloBytesPerSecond; // @dynamic kiloBytesPerSecond;
@property(copy, nonatomic) NSString *mccMnc; // @dynamic mccMnc;

@end
