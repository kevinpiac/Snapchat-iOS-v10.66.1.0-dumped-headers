//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPbGrapheneAppVersion_VersionNumber;

@interface SCPbGrapheneAppVersion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *flavor; // @dynamic flavor;
@property(nonatomic) _Bool hasVersionNumber; // @dynamic hasVersionNumber;
@property(copy, nonatomic) NSString *variant; // @dynamic variant;
@property(retain, nonatomic) SCPbGrapheneAppVersion_VersionNumber *versionNumber; // @dynamic versionNumber;

@end
