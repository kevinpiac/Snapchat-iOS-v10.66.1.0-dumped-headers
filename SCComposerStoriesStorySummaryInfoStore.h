//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCStorySummaryInfoStoring-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCLazy;

@interface SCComposerStoriesStorySummaryInfoStore : NSObject <SCDataCoordinatorListener, SCCStorySummaryInfoStoring>
{
    SCLazy *_storiesDataCoordinator;
    CDUnknownBlockType _onUpdateCallback;
}

- (void).cxx_destruct;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)dealloc;
- (void)getStorySummaryInfosWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStoriesCoordinator:(id)arg1;
- (CDUnknownBlockType)onStorySummaryInfosUpdatedWithCallback:(CDUnknownBlockType)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
