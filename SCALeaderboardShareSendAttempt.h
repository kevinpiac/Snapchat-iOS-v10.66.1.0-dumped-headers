//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCALeaderboardShareEventBase.h"

@class NSNumber;

@interface SCALeaderboardShareSendAttempt : SCALeaderboardShareEventBase
{
    NSNumber *score;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getScore;
- (void)setScore:(long long)arg1;

@end

