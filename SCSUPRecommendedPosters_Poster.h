//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSUPRecommendedPosters_OurStory, SCSUPRecommendedPosters_PublicUserStory, SCSUPRecommendedPosters_PublisherStory, SCSUPRecommendedPosters_ScoringInfo;

@interface SCSUPRecommendedPosters_Poster : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allScoringInfoArray; // @dynamic allScoringInfoArray;
@property(readonly, nonatomic) unsigned long long allScoringInfoArray_Count; // @dynamic allScoringInfoArray_Count;
@property(nonatomic) _Bool hasScoringInfo; // @dynamic hasScoringInfo;
@property(retain, nonatomic) SCSUPRecommendedPosters_OurStory *ourStory; // @dynamic ourStory;
@property(readonly, nonatomic) int posterOneOfCase; // @dynamic posterOneOfCase;
@property(retain, nonatomic) SCSUPRecommendedPosters_PublicUserStory *publicUserStory; // @dynamic publicUserStory;
@property(retain, nonatomic) SCSUPRecommendedPosters_PublisherStory *publisherStory; // @dynamic publisherStory;
@property(retain, nonatomic) SCSUPRecommendedPosters_ScoringInfo *scoringInfo; // @dynamic scoringInfo;

@end

