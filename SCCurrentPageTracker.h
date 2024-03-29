//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCurrentPageTracker-Protocol.h"

@class NSString, SCBehaviorSubject, SCCurrentPageEvent, SCDisposableObserverLifecycle, SCObservable, SCTimeProvider;

@interface SCCurrentPageTracker : NSObject <SCCurrentPageTracker>
{
    SCBehaviorSubject *_currentPageEventObservable;
    SCTimeProvider *_timeProvider;
    SCCurrentPageEvent *_lastCurrentPageEvent;
    _Bool _enableAssert;
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCObservable *_appLifecycleEventObservable;
}

- (void).cxx_destruct;
- (void)_didEnterBackground;
- (void)_willTerminate;
- (void)beginSubscription;
@property(readonly, nonatomic) SCObservable *currentPageEvent;
- (id)initWithTimeProvider:(id)arg1 appLifecycleEvent:(id)arg2 enableAssert:(_Bool)arg3;
- (void)startPage:(id)arg1;
- (void)startTransitionFromPage:(id)arg1 toPage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

