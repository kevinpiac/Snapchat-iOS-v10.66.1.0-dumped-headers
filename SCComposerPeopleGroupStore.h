//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCGroupStoring-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;

@interface SCComposerPeopleGroupStore : NSObject <SCCGroupStoring>
{
    SCLazy *_groupsDataFetcher;
    SCLazy *_groupsDataTracker;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)getGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithGroupDataFetcher:(id)arg1 groupDataTracker:(id)arg2;
- (CDUnknownBlockType)onGroupsUpdatedWithCallback:(CDUnknownBlockType)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

