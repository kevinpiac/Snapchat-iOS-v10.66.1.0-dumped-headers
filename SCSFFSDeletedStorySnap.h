//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSFFSStorySnapMetadata;

@interface SCSFFSDeletedStorySnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSFFSStorySnapMetadata *deletedSnap; // @dynamic deletedSnap;
@property(nonatomic) _Bool hasDeletedSnap; // @dynamic hasDeletedSnap;
@property(nonatomic) _Bool hasHighestSequenceNumberActiveSnap; // @dynamic hasHighestSequenceNumberActiveSnap;
@property(retain, nonatomic) SCSFFSStorySnapMetadata *highestSequenceNumberActiveSnap; // @dynamic highestSequenceNumberActiveSnap;

@end
