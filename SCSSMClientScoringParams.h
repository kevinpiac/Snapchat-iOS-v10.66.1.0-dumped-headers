//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface SCSSMClientScoringParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float ageDecayWeight; // @dynamic ageDecayWeight;
@property(retain, nonatomic) NSMutableDictionary *astVersionMap; // @dynamic astVersionMap;
@property(readonly, nonatomic) unsigned long long astVersionMap_Count; // @dynamic astVersionMap_Count;
@property(nonatomic) _Bool disableLocalReorder; // @dynamic disableLocalReorder;
@property(copy, nonatomic) NSString *discoverFeedAstVersionKey; // @dynamic discoverFeedAstVersionKey;
@property(nonatomic) float groupStoryDensity; // @dynamic groupStoryDensity;
@property(nonatomic) int groupStoryStartPos; // @dynamic groupStoryStartPos;
@property(nonatomic) float highScoreGroupStoryScoreThreshold; // @dynamic highScoreGroupStoryScoreThreshold;
@property(nonatomic) int highScoreGroupStoryStartPos; // @dynamic highScoreGroupStoryStartPos;
@property(nonatomic) float lowScoreGroupStoryScoreThreshold; // @dynamic lowScoreGroupStoryScoreThreshold;
@property(nonatomic) int lowScoreGroupStoryStartPos; // @dynamic lowScoreGroupStoryStartPos;
@property(nonatomic) float meanStoryScore; // @dynamic meanStoryScore;
@property(nonatomic) _Bool showGroupStories; // @dynamic showGroupStories;
@property(nonatomic) float storyScoreVariance; // @dynamic storyScoreVariance;

@end

