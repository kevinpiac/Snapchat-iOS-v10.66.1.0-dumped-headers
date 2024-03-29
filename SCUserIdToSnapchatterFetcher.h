//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCDocObjectContext, SCSnapchattersFetchedResultObserverRepository;
@protocol OS_dispatch_queue;

@interface SCUserIdToSnapchatterFetcher : NSObject
{
    SCDocObjectContext *_docObjectContext;
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
    NSObject<OS_dispatch_queue> *_serialLock;
    NSMutableDictionary *_userIdToSnapchatterObserverMap;
}

- (void).cxx_destruct;
- (id)_fetchedResultObserverWithUserId:(id)arg1;
- (void)_setFetchedResultObserver:(id)arg1 forUserIds:(id)arg2;
- (id)_snapchatterWithUserId:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 snapchattersFetchedResultObserverRepository:(id)arg2;
- (id)snapchatterWithUserId:(id)arg1;
- (struct NSDictionary *)snapchattersWithUserIds:(id)arg1;

@end

