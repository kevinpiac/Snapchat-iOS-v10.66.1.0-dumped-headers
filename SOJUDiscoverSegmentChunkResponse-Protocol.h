//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, SOJUDiscoverModerationAudience;

@protocol SOJUDiscoverSegmentChunkResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUDiscoverModerationAudience *audience;
@property(readonly, copy, nonatomic) NSNumber *categoryEligible;
@property(readonly, copy, nonatomic) NSArray *dsnapIds;
@property(readonly, copy, nonatomic) NSNumber *isFixed;
@property(readonly, copy, nonatomic) NSNumber *segmentId;
@property(readonly, copy, nonatomic) NSArray *tiles;
@end

