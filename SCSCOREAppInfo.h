//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSCOREAppInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int appBuild; // @dynamic appBuild;
@property(nonatomic) int appVariant; // @dynamic appVariant;
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(nonatomic) int osType; // @dynamic osType;
@property(copy, nonatomic) NSString *osVersion; // @dynamic osVersion;

@end

