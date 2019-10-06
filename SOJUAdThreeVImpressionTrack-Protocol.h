//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@protocol SOJUAdThreeVImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *creativeId;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampInMilliSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSString *topsnapMediaType;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds;
@property(readonly, copy, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes;
@end

