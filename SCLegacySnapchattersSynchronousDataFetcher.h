//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersSynchronousDataFetching-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCLegacyFriendsProvider;

@interface SCLegacySnapchattersSynchronousDataFetcher : NSObject <SCTraceEnabled, SCSnapchattersSynchronousDataFetching>
{
    id <SCLegacyFriendsProvider> _friendsProvider;
}

- (void).cxx_destruct;
- (_Bool)areSuggestedSnapchattersAvailable:(id)arg1;
- (id)incomingSnapchatterFromUserId:(id)arg1;
- (id)incomingSnapchatterFromUsername:(id)arg1;
- (id)incomingSnapchattersFromUserIds:(id)arg1;
- (id)incomingSnapchattersFromUsernames:(id)arg1;
- (id)initWithFriendsProvider:(id)arg1;
- (id)nonFriendContactSnapchatters;
- (id)officialAccountSuggestedSnapchattersFromRegistration;
- (id)outOfContactSuggestedSnapchattersFromRegistration;
- (id)outgoingSnapchatterFromUserId:(id)arg1;
- (id)outgoingSnapchatterFromUsername:(id)arg1;
- (id)outgoingSnapchattersFromUserIds:(id)arg1;
- (id)outgoingSnapchattersFromUsernames:(id)arg1;
- (unsigned long long)quickAddSnapchattersForSendToCount;
- (id)suggestedPublishersFromRegistration;
- (id)suggestedSnapchattersForNewUser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

