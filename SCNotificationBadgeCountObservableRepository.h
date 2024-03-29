//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDisposableObserverLifecycle, SCObservable, SCQueuePerformer;
@protocol SCSnapchattersDataFetching;

@interface SCNotificationBadgeCountObservableRepository : NSObject
{
    id <SCSnapchattersDataFetching> _snapchattersDataFetcher;
    SCQueuePerformer *_performer;
    SCDisposableObserverLifecycle *_disposableLifecycle;
    SCObservable *_badgeCountObservable;
}

- (void).cxx_destruct;
- (id)_createBadgeableFriendRequestsObservable:(id)arg1 snapchattersDataFetcher:(id)arg2 performerQueue:(id)arg3 observableLifecycle:(id)arg4;
- (id)_createFriendsFeedObservable:(id)arg1;
@property(readonly, nonatomic) SCObservable *badgeCountObservable; // @synthesize badgeCountObservable=_badgeCountObservable;
- (id)initWithFriendsFeed:(id)arg1 incomingFriends:(id)arg2 snapchattersDataFetcher:(id)arg3;

@end

