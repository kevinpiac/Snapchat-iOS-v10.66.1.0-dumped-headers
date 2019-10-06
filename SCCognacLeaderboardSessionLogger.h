//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"

@class NSMutableSet, NSString, SCCognacAppDataModel, SCCognacBlizzardEventLoggingController, SCCognacLeaderboard, SCQueuePerformer;

@interface SCCognacLeaderboardSessionLogger : NSObject <SCEventListener>
{
    SCCognacBlizzardEventLoggingController *_cognacEventLoggingController;
    SCCognacAppDataModel *_appDataModel;
    SCCognacLeaderboard *_leaderboard;
    NSString *_cognacSessionId;
    long long _leaderboardSourceType;
    SCQueuePerformer *_performer;
    double _timeSpentStart;
    double _timeSpentEnd;
    double _globalRank;
    long long _friendRank;
    long long _totalScores;
    NSMutableSet *_scoreViewedUserIds;
    _Bool _leaderboardDidScroll;
}

- (void).cxx_destruct;
- (void)_logScoreShareFromLeaderboardShareEvent:(id)arg1;
- (void)_logSessionEventWithEventName:(id)arg1 extraParams:(id)arg2;
- (void)_logTooltipDisplayEventWithTooltipType:(long long)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithCognacEventLoggingController:(id)arg1 appDataModel:(id)arg2 leaderboard:(id)arg3 cognacSessionId:(id)arg4 leaderboardSourceType:(long long)arg5;
- (void)logLeaderboardScoreTooltipDisplay;
- (void)logSessionEnd;
- (void)logSessionStart;
- (void)logShareSendAttempt;
- (void)logShareSendReturnToGame;
- (void)logShareSendSendTo;
- (void)markLeaderboardDidScroll;
- (void)markTimeSpentEnd;
- (void)markTimeSpentStart;
- (void)setLeaderboardEntries:(id)arg1;
- (void)setMyLeaderboardEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
