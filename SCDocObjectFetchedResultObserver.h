//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, SCDocObjectContext, SCDocObjectFetchedResult, SCLazy;
@protocol OS_dispatch_queue, SCDocObjectObservationToken;

@interface SCDocObjectFetchedResultObserver : NSObject
{
    SCDocObjectFetchedResult *_fetchedResult;
    id <SCDocObjectObservationToken> _observationToken;
    long long _onceToken;
    NSObject<OS_dispatch_queue> *_serialLock;
    NSMutableDictionary *_identifierToRegisterValueMap;
    SCDocObjectContext *_docObjectContext;
    NSObject<OS_dispatch_queue> *_observerCallBackQueue;
    NSDictionary *_mappers;
    SCLazy *_lazyFetchedResult;
}

- (void).cxx_destruct;
- (void)_observeDocObjectFetchedResult:(id)arg1;
- (void)_setDocObjectFetchedResult:(id)arg1;
- (void)_updateWithFetchedResult:(id)arg1;
@property(readonly, nonatomic) SCDocObjectContext *docObjectContext; // @synthesize docObjectContext=_docObjectContext;
- (id)fetchedResult;
- (id)initWithDocObjectContext:(id)arg1 observerCallBackQueue:(id)arg2 lazyFetchedResult:(id)arg3 mappers:(id)arg4;
@property(readonly, nonatomic) SCLazy *lazyFetchedResult; // @synthesize lazyFetchedResult=_lazyFetchedResult;
@property(readonly, nonatomic) NSDictionary *mappers; // @synthesize mappers=_mappers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerCallBackQueue; // @synthesize observerCallBackQueue=_observerCallBackQueue;
- (void)startObservationIfNecessary;
- (id)valueWithRegisteredIdentifier:(id)arg1;
- (id)withMappers:(id)arg1;

@end

