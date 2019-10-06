//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDocObject, SCDocObjectContext;
@protocol OS_dispatch_queue, SCDocObjectObservationToken;

@interface SCDocObjectObserver : NSObject
{
    SCDocObjectContext *_docObjectContext;
    NSObject<OS_dispatch_queue> *_serialLock;
    NSObject<OS_dispatch_queue> *_observerCallBackQueue;
    CDUnknownBlockType _fetchBlock;
    SCDocObject *_docObject;
    id <SCDocObjectObservationToken> _observationToken;
}

- (void).cxx_destruct;
- (void)_fetchAndObserveIfNecessary;
- (void)_setDocObject:(id)arg1;
- (void)_startObservation;
- (id)initWithDocObjectContext:(id)arg1 observerCallBackQueue:(id)arg2 fetchBlock:(CDUnknownBlockType)arg3;
- (id)value;

@end
