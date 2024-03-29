//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, SCQueuePerformer;

@interface SCRecentFriends : NSObject <NSCoding>
{
    SCQueuePerformer *_performer;
    long long _capacity;
    NSArray *_recentFriends;
}

+ (_Bool)shouldAddAsRecent:(id)arg1;
- (void).cxx_destruct;
- (void)_updateLastInteractionTimestampWithRecentFriend:(id)arg1;
- (void)_updateWithRecentFriends:(id)arg1;
- (unsigned long long)capacity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerformer:(id)arg1;
@property(retain) NSArray *recentFriends; // @synthesize recentFriends=_recentFriends;
- (id)recents;
- (void)removeFriend:(id)arg1;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setPerformer:(id)arg1;
- (void)updateWithUsername:(id)arg1 timestamp:(id)arg2;
- (void)updateWithUsernameTimestampMap:(id)arg1;
- (void)updateWithUsernames:(id)arg1;

@end

