//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCSnapchattersObservableRepository-Protocol.h"

@class NSMutableDictionary, NSString, SCBehaviorSubject, SCDocObjectContext, SCQueuePerformer, SCSnapchattersFetchedResultObserverRepository, SCUserIdToSnapchatterFetcher;
@protocol SCDataCoordinating;

@interface SCDocObjectSnapchattersObservableRepository : NSObject <SCDataCoordinatorListener, SCSnapchattersObservableRepository>
{
    SCDocObjectContext *_docObjectContext;
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
    SCUserIdToSnapchatterFetcher *_userIdToSnapchatterFetcher;
    id <SCDataCoordinating> _dataCoordinator;
    SCQueuePerformer *_performer;
    struct mutex _incomingLock;
    struct mutex _outgoingLock;
    struct mutex _userIdToSnapchatterSubjectLock;
    SCBehaviorSubject *_incomingSnapchattersSubject;
    SCBehaviorSubject *_outgoingSnapchattersSubject;
    NSMutableDictionary *_userIdToSnapchatterSubject;
    NSMutableDictionary *_userIdToSnapchatterObservationToken;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_nextIncomingSnapchattersWithDataRequest:(id)arg1;
- (void)_nextOutgoingSnapchattersWithDataRequest:(id)arg1;
- (id)_snapchatterSubjectWithUserId:(id)arg1;
- (void)_updateSnapchatterSubject:(id)arg1 observationToken:(id)arg2 forUserId:(id)arg3;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)incomingSnapchatterObservable;
- (id)initWithDocObjectContext:(id)arg1 snapchattersFetchedResultObserverRepository:(id)arg2 userIdToSnapchatterFetcher:(id)arg3 dataCoordinator:(id)arg4;
- (id)outgoingSnapchatterObservable;
- (id)snapchatterObservableWithUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

