//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCStoryAdTrackInfo <NSObject>
@property(readonly, copy, nonatomic) NSString *exitEvent;
@property(readonly, nonatomic) _Bool isAudioOn;
@property(readonly, nonatomic) long long snapCount;
@property(readonly, nonatomic) double timeViewedInMillis;
@property(readonly, nonatomic) unsigned long long totalSwipeUps;
@property(readonly, nonatomic) long long totalTopSnapsMediaDurationMillis;
@property(readonly, nonatomic) unsigned long long uniqueSwipeUps;
@end
