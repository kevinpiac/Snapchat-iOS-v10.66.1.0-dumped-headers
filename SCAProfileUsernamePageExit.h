//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAProfileUsernamePageExit : SCAUserTrackedEvent
{
    NSNumber *nonFriendCount;
    NSNumber *nonFriendCountWithDisplayPic;
    NSNumber *friendAddCount;
    NSNumber *friendAddCountWithDisplayPic;
    long long source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFriendAddCount;
- (long long)getFriendAddCountWithDisplayPic;
- (long long)getNonFriendCount;
- (long long)getNonFriendCountWithDisplayPic;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (id)init;
- (void)setFriendAddCount:(long long)arg1;
- (void)setFriendAddCountWithDisplayPic:(long long)arg1;
- (void)setNonFriendCount:(long long)arg1;
- (void)setNonFriendCountWithDisplayPic:(long long)arg1;
- (void)setSource:(long long)arg1;

@end

