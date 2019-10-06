//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@protocol SOJUAdDeepLinkImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *creativeId;
@property(readonly, copy, nonatomic) NSNumber *deepLinkFallbackToAppStore;
@property(readonly, copy, nonatomic) NSNumber *deepLinkFallbackToWebview;
@property(readonly, copy, nonatomic) NSNumber *deepLinkFromCard;
@property(readonly, copy, nonatomic) NSString *deepLinkUri;
@property(readonly, copy, nonatomic) NSNumber *deepLinkedToAppCount;
@property(readonly, copy, nonatomic) NSNumber *deepLinkedToAppInstallCount;
@property(readonly, copy, nonatomic) NSNumber *deepLinkedToAppInstallErrorCount;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy, nonatomic) NSNumber *longformAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampInMilliSeconds;
@property(readonly, copy, nonatomic) NSNumber *swipeCount;
@property(readonly, copy, nonatomic) NSNumber *swiped;
@property(readonly, copy, nonatomic) NSNumber *timeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSString *topsnapMediaType;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds;
@property(readonly, copy, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes;
@end

