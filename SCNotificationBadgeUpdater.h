//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCDisposableObserverLifecycle, SCObservable, UIApplication;

@interface SCNotificationBadgeUpdater : NSObject
{
    UIApplication *_application;
    SCObservable *_numberOfConsumableItems;
    SCDisposableObserverLifecycle *_disposableLifecycle;
    NSMutableDictionary *_observables;
}

- (void).cxx_destruct;
- (id)initWithApplication:(id)arg1;
- (void)startMonitoringFeedItemUpdates:(id)arg1;
- (void)stopMonitoringFeedItemUpdates;

@end

