//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString;

@interface SCASearchrankingAction : SCAUserTrackedEvent
{
    NSNumber *searchQueryId;
    NSNumber *searchResultSectionIndex;
    NSNumber *resultSubcomponentIndex;
    long long searchResultSection;
    long long context;
    long long action;
    long long source;
    long long gesture;
    long long searchResultReason;
    NSString *searchSessionId;
    NSString *searchResultSectionTitle;
    NSString *searchResultRankingId;
    NSString *searchResultIdentifier;
    NSString *resultSubcomponentId;
    NSString *actionScreenLocation;
    NSString *actionDestination;
    NSDate *clientTimestamp;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (id)getActionDestination;
- (id)getActionScreenLocation;
- (id)getClientTimestamp;
- (long long)getContext;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getGesture;
- (double)getPerUserSamplingRate;
- (id)getResultSubcomponentId;
- (long long)getResultSubcomponentIndex;
- (long long)getSearchQueryId;
- (id)getSearchResultIdentifier;
- (id)getSearchResultRankingId;
- (long long)getSearchResultReason;
- (long long)getSearchResultSection;
- (long long)getSearchResultSectionIndex;
- (id)getSearchResultSectionTitle;
- (id)getSearchSessionId;
- (long long)getSource;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setActionDestination:(id)arg1;
- (void)setActionScreenLocation:(id)arg1;
- (void)setClientTimestamp:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setGesture:(long long)arg1;
- (void)setResultSubcomponentId:(id)arg1;
- (void)setResultSubcomponentIndex:(long long)arg1;
- (void)setSearchQueryId:(long long)arg1;
- (void)setSearchResultIdentifier:(id)arg1;
- (void)setSearchResultRankingId:(id)arg1;
- (void)setSearchResultReason:(long long)arg1;
- (void)setSearchResultSection:(long long)arg1;
- (void)setSearchResultSectionIndex:(long long)arg1;
- (void)setSearchResultSectionTitle:(id)arg1;
- (void)setSearchSessionId:(id)arg1;
- (void)setSource:(long long)arg1;

@end
