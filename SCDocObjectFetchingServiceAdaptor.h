//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSnapchattersFetchedResultObserverRepository;

@interface SCDocObjectFetchingServiceAdaptor : NSObject
{
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
}

- (void).cxx_destruct;
- (id)blockedSnapchattersObserver;
- (id)incomingSnapchattersObserver;
- (id)initWithSnapchattersFetchedResultObserverRepository:(id)arg1;
- (id)outgoingSnapchattersObserver;
- (id)sortedIncomingSnapchatters;
- (id)sortedOutgoingSnapchatters;
- (struct NSDictionary *)userIdToBlockedSnapchatterMap;
- (struct NSDictionary *)userIdToIncomingSnapchatterMap;
- (struct NSDictionary *)userIdToOutgoingSnapchatterMap;
- (struct NSDictionary *)usernameToBlockedSnapchatterMap;
- (struct NSDictionary *)usernameToIncomingSnapchatterMap;
- (struct NSDictionary *)usernameToOutgoingSnapchatterMap;

@end

