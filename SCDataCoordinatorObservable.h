//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCObservable.h"

#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCBehaviorSubject;

@interface SCDataCoordinatorObservable : SCObservable <SCDataCoordinatorListener>
{
    SCBehaviorSubject *_behaviorSubject;
    id _dataCoordinator;
    CDUnknownBlockType _dataRequestFilter;
}

- (void).cxx_destruct;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithDataCoordinator:(id)arg1 dataRequestFilter:(CDUnknownBlockType)arg2;
- (id)subscribe:(id)arg1;
- (void)unsubscribe:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
