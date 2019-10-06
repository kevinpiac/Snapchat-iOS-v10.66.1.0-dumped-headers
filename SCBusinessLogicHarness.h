//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, SCBehaviorSubject, SCBusinessLogic, SCDisposableObserverLifecycle;

@interface SCBusinessLogicHarness : NSObject
{
    SCBusinessLogic *_businessLogic;
    NSOperationQueue *_businessLogicQueue;
    SCDisposableObserverLifecycle *_subscriptions;
    SCBehaviorSubject *_viewModels;
    NSMutableSet *_childHarnesses;
}

- (void).cxx_destruct;
- (void)_emitViewModel;
- (void)_handleNewAction:(id)arg1;
- (id)addChildBusinessLogic:(id)arg1;
- (id)initWithBusinessLogic:(id)arg1;
- (id)initWithBusinessLogic:(id)arg1 businessLogicQueue:(id)arg2;
- (void)setActions:(id)arg1;
- (id)viewModels;

@end

