//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCQueuePerformer;
@protocol SCStoriesMediaCoordinating, SCStoriesMetadataCoordinating;

@interface SCStoriesMediaStateUpdateMonitor : NSObject <SCDataCoordinatorListener>
{
    id <SCStoriesMetadataCoordinating> _storiesDataCoordinator;
    id <SCStoriesMediaCoordinating> _storiesMediaCoordinator;
    SCQueuePerformer *_requestPerformer;
}

- (void).cxx_destruct;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithStoriesDataCoordinator:(id)arg1 storiesMediaCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
