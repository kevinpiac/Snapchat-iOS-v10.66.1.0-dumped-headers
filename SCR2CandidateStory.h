//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoBoundingBox;

@interface SCR2CandidateStory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCR2GeoBoundingBox *boundingBox; // @dynamic boundingBox;
@property(nonatomic) _Bool hasBoundingBox; // @dynamic hasBoundingBox;
@property(nonatomic) _Bool isHighQuality; // @dynamic isHighQuality;
@property(retain, nonatomic) NSMutableArray *matchNgramsArray; // @dynamic matchNgramsArray;
@property(readonly, nonatomic) unsigned long long matchNgramsArray_Count; // @dynamic matchNgramsArray_Count;
@property(copy, nonatomic) NSString *storyTitle; // @dynamic storyTitle;

@end
