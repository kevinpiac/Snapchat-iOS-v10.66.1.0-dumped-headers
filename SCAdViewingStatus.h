//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoryAdTrackInfo-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SCAdInteractionTimer;

@interface SCAdViewingStatus : NSObject <SCStoryAdTrackInfo>
{
    NSMutableArray *_aggregatedSnapInteractionList;
    NSMutableArray *_viewingStatusList;
    double _responseReceiveTimestampInMillis;
    long long _totalTopSnapsMediaDurationMillis;
    SCAdInteractionTimer *_totalViewDurationTimer;
    float _tileWidth;
    float _tileHeight;
    float _screenWidth;
    float _screenHeight;
    _Bool _wasShown;
    _Bool _isUnSkippableAd;
    long long _adType;
    NSString *_adKey;
    unsigned long long _adProductType;
    long long _topSnapMedia;
    long long _maxViewedSnapIndex;
    long long _maxViewedSnapIndexSinceReset;
    NSDictionary *_viewContext;
}

- (void).cxx_destruct;
- (void)_setDefaultValue;
- (void)_setViewedSnapIndex:(long long)arg1;
- (void)adHideAtSnapIndex:(long long)arg1 viewContext:(id)arg2 isUnskippableAd:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSString *adKey; // @synthesize adKey=_adKey;
- (void)adLongPressedAtSnapIndex:(long long)arg1;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
- (void)adScreenshotAtSnapIndex:(long long)arg1;
- (void)adShowAtSnapIndex:(long long)arg1 onTopSnap:(_Bool)arg2 currentMediaVolumePercent:(double)arg3 isUnSkippableAd:(_Bool)arg4;
- (void)adSnapHideAtSnapIndex:(long long)arg1 onTopSnap:(_Bool)arg2 skipEvent:(id)arg3;
- (id)adSnapInteractionAtSnapIndex:(long long)arg1;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
- (long long)adTypeAtSnapIndex:(long long)arg1;
- (id)adViewingTrackInfoAtIndex:(long long)arg1;
- (void)addAdSnapInteraction:(id)arg1;
- (void)addAdSnapViewingStatus:(id)arg1;
- (id)currentViewingInteractionForSnapIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *exitEvent;
- (float)getScreenHeight;
- (float)getScreenWidth;
- (float)getTileHeight;
- (float)getTileWidth;
- (id)initWithAdType:(long long)arg1 adKey:(id)arg2 responseReceiveTimestampInMillis:(double)arg3 adProductType:(unsigned long long)arg4 tileWidth:(float)arg5 tileHeight:(float)arg6 screenWidth:(float)arg7 screenHeight:(float)arg8;
@property(readonly, nonatomic) _Bool isAudioOn;
@property(nonatomic) _Bool isUnSkippableAd; // @synthesize isUnSkippableAd=_isUnSkippableAd;
@property(readonly, nonatomic) long long maxViewedSnapIndex; // @synthesize maxViewedSnapIndex=_maxViewedSnapIndex;
@property(readonly, nonatomic) long long maxViewedSnapIndexSinceReset; // @synthesize maxViewedSnapIndexSinceReset=_maxViewedSnapIndexSinceReset;
- (void)obstructedOnTopSnap:(_Bool)arg1 snapIndex:(long long)arg2;
- (void)onAudibilityChange:(double)arg1 snapIndex:(long long)arg2;
- (void)resetForSwipeBackTracking;
- (void)setDeepLinkFromCard:(_Bool)arg1 deepLinkFallBackToAppStore:(_Bool)arg2 deepLinkFallBackToWebview:(_Bool)arg3 snapIndex:(long long)arg4 interactionZoneItemIndex:(id)arg5;
- (void)setLoadedOnEntry:(_Bool)arg1 loadedOnExit:(_Bool)arg2 visiblePageLoadTimeSeconds:(double)arg3 snapIndex:(long long)arg4 interactionZoneItemIndex:(id)arg5;
- (void)setLongformMediaDurationMillis:(long long)arg1 longformMediaDurationMillis:(long long)arg2 snapIndex:(long long)arg3;
- (void)setPixelCookieAvailability:(_Bool)arg1 snapIndex:(long long)arg2;
- (void)setTopSnapMediaDurationMillis:(long long)arg1 topSnapReportedViewDurationMillis:(long long)arg2 snapIndex:(long long)arg3 topSnapMedia:(long long)arg4;
@property(nonatomic) _Bool wasShown; // @synthesize wasShown=_wasShown;
@property(readonly, nonatomic) long long snapCount;
- (void)swipeUpToCardAtSnapIndex:(long long)arg1;
- (void)swipedFromTopSnap:(_Bool)arg1 snapIndex:(long long)arg2 viewContext:(id)arg3 currentMediaVolumePercent:(double)arg4;
@property(readonly, nonatomic) double timeViewedInMillis;
@property(readonly, nonatomic) long long topSnapMedia; // @synthesize topSnapMedia=_topSnapMedia;
@property(readonly, nonatomic) unsigned long long totalSwipeUps;
@property(readonly, nonatomic) long long totalTopSnapsMediaDurationMillis;
@property(readonly, nonatomic) unsigned long long uniqueSwipeUps;
- (void)unobstructedOnTopSnap:(_Bool)arg1 currentMediaVolumePercent:(double)arg2 snapIndex:(long long)arg3;
@property(readonly, copy, nonatomic) NSDictionary *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) long long viewingStatusCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
