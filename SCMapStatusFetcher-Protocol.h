//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSOrderedSet, NSString, SCMapStatusGroup;
@protocol SCMapStatusFetcherListener;

@protocol SCMapStatusFetcher <NSObject>
- (void)addStatusFetcherListener:(id <SCMapStatusFetcherListener>)arg1;
- (NSOrderedSet *)exploreItems;
- (_Bool)hasLoadedExploreItemsAtLeastOnce;
- (_Bool)hasLoadedMyStatusesAtLeastOnce;
- (NSOrderedSet *)myStatuses;
- (void)reload;
- (void)reloadExploreItems;
- (void)reloadExploreItemsIfOlderThan:(double)arg1;
- (void)reloadIfOlderThan:(double)arg1;
- (void)reloadMyStatuses;
- (void)reloadMyStatusesIfOlderThan:(double)arg1;
- (void)removeRequestedUpdatesForStatusFetcherListener:(id <SCMapStatusFetcherListener>)arg1;
- (void)removeStatusFetcherListener:(id <SCMapStatusFetcherListener>)arg1;
- (void)requestPeriodicUpdatesForStatusFetcherListener:(id <SCMapStatusFetcherListener>)arg1;
- (SCMapStatusGroup *)statusGroupForUserId:(NSString *)arg1;
@end

