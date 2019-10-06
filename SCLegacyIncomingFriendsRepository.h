//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCIncomingFriendsRepository-Protocol.h"

@class SCBehaviorSubject, SCObservable, SCQueuePerformer;

@interface SCLegacyIncomingFriendsRepository : NSObject <SCIncomingFriendsRepository>
{
    CDUnknownBlockType _incomingFriendsProvider;
    CDUnknownBlockType _incomingFriendAdaptor;
    SCQueuePerformer *_performer;
    struct mutex _lock;
    SCBehaviorSubject *_unviewedIncomingFriends;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_nextUnviewedIncomingFriends:(id)arg1;
- (void)_updateUnviewedIncomingFriends;
- (id)initWithIncomingFriendsProvider:(CDUnknownBlockType)arg1 incomingFriendAdaptor:(CDUnknownBlockType)arg2 notificationName:(id)arg3 notificationCenter:(id)arg4;
@property(readonly, nonatomic) SCObservable *resurrectedPendingFriendRequests;
@property(readonly, nonatomic) SCObservable *unviewedIncomingFriends;

@end

