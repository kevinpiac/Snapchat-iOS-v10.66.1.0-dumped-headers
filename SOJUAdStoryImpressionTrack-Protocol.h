//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdTileImpressionTrack;

@protocol SOJUAdStoryImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *creativeId;
@property(readonly, copy, nonatomic) NSString *exitEvent;
@property(readonly, copy, nonatomic) NSNumber *isAudioOn;
@property(readonly, copy, nonatomic) NSNumber *mediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *snapCount;
@property(readonly, copy, nonatomic) NSArray *snapImpressions;
@property(readonly, copy, nonatomic) SOJUAdTileImpressionTrack *tileImpression;
@property(readonly, copy, nonatomic) NSNumber *timeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *totalSwipeUps;
@property(readonly, copy, nonatomic) NSNumber *uniqueSwipeUps;
@property(readonly, copy, nonatomic) NSNumber *viewedSnapIndex;
@end

