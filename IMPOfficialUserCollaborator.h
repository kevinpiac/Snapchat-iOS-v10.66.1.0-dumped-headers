//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPUserDisplayInfo;

@interface IMPOfficialUserCollaborator : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) IMPUserDisplayInfo *displayInfo; // @dynamic displayInfo;
@property(nonatomic) _Bool hasDisplayInfo; // @dynamic hasDisplayInfo;
@property(nonatomic) int permissionBitmask; // @dynamic permissionBitmask;

@end
