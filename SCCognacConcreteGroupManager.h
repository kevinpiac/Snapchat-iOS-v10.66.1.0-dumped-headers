//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacGroupManager-Protocol.h"

@class NSString, SCLazy;
@protocol SCGroupManager;

@interface SCCognacConcreteGroupManager : NSObject <SCCognacGroupManager>
{
    id <SCGroupManager> _groupManager;
    SCLazy *_groupsDataCreator;
}

- (void).cxx_destruct;
- (void)createGroupWithFriends:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)existingGroupForFriends:(id)arg1;
- (id)groupForGroupId:(id)arg1;
- (id)groupsForGroupIds:(id)arg1;
- (id)initWithGroupManager:(id)arg1 groupsDataCreator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
