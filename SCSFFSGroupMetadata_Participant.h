//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSFFSPerson;

@interface SCSFFSGroupMetadata_Participant : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int colorHex; // @dynamic colorHex;
@property(nonatomic) _Bool hasPerson; // @dynamic hasPerson;
@property(nonatomic) _Bool isStoryMuted; // @dynamic isStoryMuted;
@property(retain, nonatomic) SCSFFSPerson *person; // @dynamic person;

@end

