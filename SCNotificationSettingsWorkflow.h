//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDisposableObserverLifecycle, SCLazy, SCObservable;

@interface SCNotificationSettingsWorkflow : NSObject
{
    SCLazy *_lazyNotificationSettingsPresenter;
    SCDisposableObserverLifecycle *_notificationLifecycle;
    SCObservable *_notificationLifecycleEvents;
}

- (void).cxx_destruct;
- (void)_openSettingsForNotification:(id)arg1;
- (id)initWithNotificationSettingsPresenter:(id)arg1 notificationLifecycleEvents:(id)arg2;
- (void)startSubscribingToNotificationEvents;
- (void)stopSubscribingToNotificationEvents;

@end

