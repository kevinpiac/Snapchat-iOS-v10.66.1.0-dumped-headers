//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAProfileMyFriendsPageExit : SCAUserTrackedEvent
{
    NSNumber *myFriendCount;
    NSNumber *myFriendRemoveCount;
    NSNumber *myFriendBlockCount;
    NSNumber *myFriendReAddCount;
    NSNumber *myFriendNameEditCount;
    NSNumber *myFriendRemoveInSearchCount;
    NSNumber *myFriendBlockInSearchCount;
    NSNumber *myFriendReAddInSearchCount;
    NSNumber *myFriendNameEditInSearchCount;
    long long destination;
    long long destinationPage;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDestination;
- (long long)getDestinationPage;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMyFriendBlockCount;
- (long long)getMyFriendBlockInSearchCount;
- (long long)getMyFriendCount;
- (long long)getMyFriendNameEditCount;
- (long long)getMyFriendNameEditInSearchCount;
- (long long)getMyFriendReAddCount;
- (long long)getMyFriendReAddInSearchCount;
- (long long)getMyFriendRemoveCount;
- (long long)getMyFriendRemoveInSearchCount;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setDestination:(long long)arg1;
- (void)setDestinationPage:(long long)arg1;
- (void)setMyFriendBlockCount:(long long)arg1;
- (void)setMyFriendBlockInSearchCount:(long long)arg1;
- (void)setMyFriendCount:(long long)arg1;
- (void)setMyFriendNameEditCount:(long long)arg1;
- (void)setMyFriendNameEditInSearchCount:(long long)arg1;
- (void)setMyFriendReAddCount:(long long)arg1;
- (void)setMyFriendReAddInSearchCount:(long long)arg1;
- (void)setMyFriendRemoveCount:(long long)arg1;
- (void)setMyFriendRemoveInSearchCount:(long long)arg1;

@end
