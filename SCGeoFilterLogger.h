//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGeoFilterLogger-Protocol.h"

@class NSMutableDictionary, NSString, SCLocationServicesDataStore;

@interface SCGeoFilterLogger : NSObject <SCGeoFilterLogger>
{
    NSString *sessionId;
    _Bool _abandonedGeofilterMissLoggingForSnapSession;
    _Bool _lastSessionOver;
    _Bool _validSession;
    _Bool _unfilteredSwipedAway;
    _Bool _isCancelled;
    unsigned long long _sessionCounter;
    long long _swipeDirection;
    double _snapTakenTime;
    long long _numSwipes;
    NSMutableDictionary *_loadingMetaDataMap;
    SCLocationServicesDataStore *_locationServiceDataStore;
    long long _initialLocationDataState;
    long long _firstSwipeLocationDataState;
    long long _lastSwipeLocationDataState;
    double _initialLocationAccuracy;
    double _firstSwipeLocationAccuracy;
    double _lastSwipeLocationAccuracy;
    double _firstSwipeDelay;
    double _lastSwipeDelay;
}

+ (long long)_numberFilters:(id)arg1 withStage:(long long)arg2;
+ (id)aggregateLoadingState:(id)arg1;
+ (id)loadingLogParameters:(id)arg1 withReferenceTime:(double)arg2;
+ (long long)mapFromSCPreCacheResultStatusEnum:(unsigned long long)arg1;
+ (long long)numberFiltersMissed:(id)arg1;
+ (double)opportunityCaptured:(id)arg1 withLocationDataState:(long long)arg2;
- (void).cxx_destruct;
- (void)_logLoadingStageReady:(id)arg1 withStage:(long long)arg2;
- (id)_upsertIfNecessary:(id)arg1 withNewStage:(id)arg2;
@property(nonatomic) _Bool abandonedGeofilterMissLoggingForSnapSession; // @synthesize abandonedGeofilterMissLoggingForSnapSession=_abandonedGeofilterMissLoggingForSnapSession;
- (void)didSwipe;
@property(nonatomic) double firstSwipeDelay; // @synthesize firstSwipeDelay=_firstSwipeDelay;
@property(nonatomic) double firstSwipeLocationAccuracy; // @synthesize firstSwipeLocationAccuracy=_firstSwipeLocationAccuracy;
@property(nonatomic) long long firstSwipeLocationDataState; // @synthesize firstSwipeLocationDataState=_firstSwipeLocationDataState;
- (_Bool)geofilterMissLoggingValidSession;
- (id)initWithLocationServicesDataStore:(id)arg1;
@property(nonatomic) double initialLocationAccuracy; // @synthesize initialLocationAccuracy=_initialLocationAccuracy;
@property(nonatomic) long long initialLocationDataState; // @synthesize initialLocationDataState=_initialLocationDataState;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (_Bool)isFilterFromPrecache:(id)arg1;
@property(nonatomic) _Bool lastSessionOver; // @synthesize lastSessionOver=_lastSessionOver;
@property(nonatomic) double lastSwipeDelay; // @synthesize lastSwipeDelay=_lastSwipeDelay;
@property(nonatomic) double lastSwipeLocationAccuracy; // @synthesize lastSwipeLocationAccuracy=_lastSwipeLocationAccuracy;
@property(nonatomic) long long lastSwipeLocationDataState; // @synthesize lastSwipeLocationDataState=_lastSwipeLocationDataState;
@property(readonly, copy, nonatomic) NSMutableDictionary *loadingMetaDataMap; // @synthesize loadingMetaDataMap=_loadingMetaDataMap;
@property(readonly, nonatomic) __weak SCLocationServicesDataStore *locationServiceDataStore; // @synthesize locationServiceDataStore=_locationServiceDataStore;
- (void)logFilterMissIfAnyForFilterName:(id)arg1 index:(long long)arg2 currentItemIndex:(unsigned long long)arg3;
- (void)logFilterReadyMissForFilter:(id)arg1 swipeDirection:(id)arg2 session:(id)arg3 sessionNum:(unsigned long long)arg4;
- (void)logFinalGeofilterMissEvents;
- (void)logGeofilterReadyMissEventsForSessionNumber:(unsigned long long)arg1;
- (long long)numReady;
- (long long)numSeen;
@property(readonly, nonatomic) long long numSwipes; // @synthesize numSwipes=_numSwipes;
- (id)preCacheApplicableResult;
- (long long)precacheStatus;
@property(nonatomic) unsigned long long sessionCounter; // @synthesize sessionCounter=_sessionCounter;
- (void)setSnapIsCancelled:(_Bool)arg1;
@property(nonatomic) long long swipeDirection; // @synthesize swipeDirection=_swipeDirection;
@property(nonatomic) _Bool unfilteredSwipedAway; // @synthesize unfilteredSwipedAway=_unfilteredSwipedAway;
@property(nonatomic) _Bool validSession; // @synthesize validSession=_validSession;
@property(readonly, nonatomic) double snapTakenTime; // @synthesize snapTakenTime=_snapTakenTime;
- (void)swipeOverView:(id)arg1;
- (void)upsertIfNecessary:(id)arg1;
- (void)upsertIfNecessary:(id)arg1 withNewStage:(long long)arg2;
- (void)viewingStarted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
