//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SCULUnlockablesSnapInfo;

@interface SDMUnlockables : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *encryptedGeoData; // @dynamic encryptedGeoData;
@property(nonatomic) _Bool hasUnlockablesSnapInfo; // @dynamic hasUnlockablesSnapInfo;
@property(retain, nonatomic) SCULUnlockablesSnapInfo *unlockablesSnapInfo; // @dynamic unlockablesSnapInfo;

@end

