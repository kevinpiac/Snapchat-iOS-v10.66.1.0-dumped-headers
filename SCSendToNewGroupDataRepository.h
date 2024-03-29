//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCQueuePerformer;
@protocol SCGroupManager;

@interface SCSendToNewGroupDataRepository : NSObject
{
    SCLazy *_groupSnapchatterRepository;
    SCLazy *_snapchattersDataFetcher;
    id <SCGroupManager> _groupManager;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)groupParticipantAndFriendSnapchattersWithGroupIds:(id)arg1 userIds:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithGroupSnapchatterRepository:(id)arg1 snapchattersDataFetcher:(id)arg2 groupManager:(id)arg3;

@end

