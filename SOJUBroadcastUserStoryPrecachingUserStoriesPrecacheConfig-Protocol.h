//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig, SOJUBroadcastUserStoryPrecachingPrecacheCounts;

@protocol SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCounts *defaultPrecacheCount;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *lookaheadPrecache;
@property(readonly, copy, nonatomic) NSArray *lookaheadPrecachePerSection;
@property(readonly, copy, nonatomic) NSArray *precacheCountsPerStory;
@end
