//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCANewStoriesButtonView : SCAUserTrackedEvent
{
    long long newStoriesButtonType;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNewStoriesButtonType;
- (double)getPerUserSamplingRate;
- (id)getRankingId;
- (id)getRankingModelId;
- (id)getServerRankingId;
- (id)init;
- (void)setNewStoriesButtonType:(long long)arg1;
- (void)setRankingId:(id)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setServerRankingId:(id)arg1;

@end

