//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArroyoFeedDataUpdateListener-Protocol.h"

@interface SCArroyoFeedDataUpdateListenerAnnouncer : NSObject <SCArroyoFeedDataUpdateListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCArroyoFeedDataUpdateListener>, std::__1::allocator<__weak id<SCArroyoFeedDataUpdateListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
- (id)description;
- (void)didFetchAndSyncFeedCompleteUpdatedFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didFetchFeedCompleteFeedEntries:(id)arg1 fetchContext:(id)arg2;
- (void)didQueryFeedCompleteFeedEntries:(id)arg1 hasNoMore:(_Bool)arg2 fetchContext:(id)arg3;
- (void)didSyncFeedCompleteUpdatedFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didUpdateFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2;
- (void)removeListener:(id)arg1;

@end

