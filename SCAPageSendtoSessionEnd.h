//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString, SCARankingSessionMetadata, SCASendToStoryList;

@interface SCAPageSendtoSessionEnd : SCAUserTrackedEvent
{
    NSNumber *sendtoSessionTimeSec;
    NSNumber *sendtoSessionSearchTimeSec;
    NSNumber *bestFriendsSelectAllActionCount;
    NSNumber *bestFriendsDeselectAllActionCount;
    NSNumber *didDismissRealTimeSuggestions;
    NSNumber *storiesViewMoreIndex;
    NSNumber *storiesViewMoreTapped;
    long long sendtoFirstSelectSection;
    long long source;
    long long bestFriendsSelectAllLastActionType;
    long long status;
    NSString *sectionsAvailable;
    NSString *sectionsFriendsSeen;
    NSString *sectionsFriendsSelected;
    NSString *sectionsNonSnapchattersAvailable;
    NSString *sectionsNonSnapchattersSeen;
    NSString *sectionsNonSnapchattersSelected;
    NSString *sectionsOurStoryTagsSeen;
    NSString *recipientsPreselected;
    NSString *sendtoSessionId;
    NSString *storiesSeen;
    NSString *storiesSelected;
    NSString *storyTypesAvailable;
    NSString *storyTypesSeen;
    NSString *storyTypesSelected;
    NSString *snapId;
    NSString *captureSessionId;
    SCASendToStoryList *storiesAvailable;
    SCARankingSessionMetadata *rankingSessionMetadata;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getBestFriendsDeselectAllActionCount;
- (long long)getBestFriendsSelectAllActionCount;
- (long long)getBestFriendsSelectAllLastActionType;
- (id)getCaptureSessionId;
- (_Bool)getDidDismissRealTimeSuggestions;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getRankingSessionMetadata;
- (id)getRecipientsPreselected;
- (id)getSectionsAvailable;
- (id)getSectionsFriendsSeen;
- (id)getSectionsFriendsSelected;
- (id)getSectionsNonSnapchattersAvailable;
- (id)getSectionsNonSnapchattersSeen;
- (id)getSectionsNonSnapchattersSelected;
- (id)getSectionsOurStoryTagsSeen;
- (long long)getSendtoFirstSelectSection;
- (id)getSendtoSessionId;
- (long long)getSendtoSessionSearchTimeSec;
- (long long)getSendtoSessionTimeSec;
- (id)getSnapId;
- (long long)getSource;
- (long long)getStatus;
- (id)getStoriesAvailable;
- (id)getStoriesSeen;
- (id)getStoriesSelected;
- (long long)getStoriesViewMoreIndex;
- (_Bool)getStoriesViewMoreTapped;
- (id)getStoryTypesAvailable;
- (id)getStoryTypesSeen;
- (id)getStoryTypesSelected;
- (id)init;
- (void)setBestFriendsDeselectAllActionCount:(long long)arg1;
- (void)setBestFriendsSelectAllActionCount:(long long)arg1;
- (void)setBestFriendsSelectAllLastActionType:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setDidDismissRealTimeSuggestions:(_Bool)arg1;
- (void)setRankingSessionMetadata:(id)arg1;
- (void)setRecipientsPreselected:(id)arg1;
- (void)setSectionsAvailable:(id)arg1;
- (void)setSectionsFriendsSeen:(id)arg1;
- (void)setSectionsFriendsSelected:(id)arg1;
- (void)setSectionsNonSnapchattersAvailable:(id)arg1;
- (void)setSectionsNonSnapchattersSeen:(id)arg1;
- (void)setSectionsNonSnapchattersSelected:(id)arg1;
- (void)setSectionsOurStoryTagsSeen:(id)arg1;
- (void)setSendtoFirstSelectSection:(long long)arg1;
- (void)setSendtoSessionId:(id)arg1;
- (void)setSendtoSessionSearchTimeSec:(long long)arg1;
- (void)setSendtoSessionTimeSec:(long long)arg1;
- (void)setSnapId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStoriesAvailable:(id)arg1;
- (void)setStoriesSeen:(id)arg1;
- (void)setStoriesSelected:(id)arg1;
- (void)setStoriesViewMoreIndex:(long long)arg1;
- (void)setStoriesViewMoreTapped:(_Bool)arg1;
- (void)setStoryTypesAvailable:(id)arg1;
- (void)setStoryTypesSeen:(id)arg1;
- (void)setStoryTypesSelected:(id)arg1;

@end

