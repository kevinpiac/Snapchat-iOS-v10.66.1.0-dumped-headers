//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSFFSStoryOwner, SCSFFSStorySnap;

@interface SCSFFSStoryState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long currentSequenceNumber; // @dynamic currentSequenceNumber;
@property(nonatomic) _Bool hasLatestValidSnap; // @dynamic hasLatestValidSnap;
@property(nonatomic) _Bool hasOwner; // @dynamic hasOwner;
@property(nonatomic) _Bool hasUnseenStories; // @dynamic hasUnseenStories;
@property(nonatomic) long long largestActiveSnapSequenceNumber; // @dynamic largestActiveSnapSequenceNumber;
@property(retain, nonatomic) SCSFFSStorySnap *latestValidSnap; // @dynamic latestValidSnap;
@property(retain, nonatomic) SCSFFSStoryOwner *owner; // @dynamic owner;

@end

