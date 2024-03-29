//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, GPBInt64Array, GPBInt64ObjectDictionary, GPBStringUInt32Dictionary, GPBUInt64Array, NSData, NSMutableArray;

@interface Subscriptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *hiddenCategoriesArray; // @dynamic hiddenCategoriesArray;
@property(readonly, nonatomic) unsigned long long hiddenCategoriesArray_Count; // @dynamic hiddenCategoriesArray_Count;
@property(copy, nonatomic) NSData *hiddenLensCreators; // @dynamic hiddenLensCreators;
@property(retain, nonatomic) GPBInt64Array *hiddenLensesArray; // @dynamic hiddenLensesArray;
@property(readonly, nonatomic) unsigned long long hiddenLensesArray_Count; // @dynamic hiddenLensesArray_Count;
@property(retain, nonatomic) GPBStringUInt32Dictionary *hiddenLiveStreamCreatorsCount; // @dynamic hiddenLiveStreamCreatorsCount;
@property(readonly, nonatomic) unsigned long long hiddenLiveStreamCreatorsCount_Count; // @dynamic hiddenLiveStreamCreatorsCount_Count;
@property(copy, nonatomic) NSData *hiddenLiveStreams; // @dynamic hiddenLiveStreams;
@property(retain, nonatomic) GPBInt64Array *hiddenPublishersArray; // @dynamic hiddenPublishersArray;
@property(readonly, nonatomic) unsigned long long hiddenPublishersArray_Count; // @dynamic hiddenPublishersArray_Count;
@property(copy, nonatomic) NSData *hiddenStories; // @dynamic hiddenStories;
@property(copy, nonatomic) NSData *hiddenUsers; // @dynamic hiddenUsers;
@property(retain, nonatomic) GPBUInt64Array *hiddenUsersFprintsArray; // @dynamic hiddenUsersFprintsArray;
@property(readonly, nonatomic) unsigned long long hiddenUsersFprintsArray_Count; // @dynamic hiddenUsersFprintsArray_Count;
@property(copy, nonatomic) NSData *softHiddenUsers; // @dynamic softHiddenUsers;
@property(retain, nonatomic) NSMutableArray *subscribedLensCreatorsArray; // @dynamic subscribedLensCreatorsArray;
@property(readonly, nonatomic) unsigned long long subscribedLensCreatorsArray_Count; // @dynamic subscribedLensCreatorsArray_Count;
@property(retain, nonatomic) NSMutableArray *subscribedLiveStreamCreatorsArray; // @dynamic subscribedLiveStreamCreatorsArray;
@property(readonly, nonatomic) unsigned long long subscribedLiveStreamCreatorsArray_Count; // @dynamic subscribedLiveStreamCreatorsArray_Count;
@property(retain, nonatomic) GPBStringUInt32Dictionary *subscribedParentEventCounts; // @dynamic subscribedParentEventCounts;
@property(readonly, nonatomic) unsigned long long subscribedParentEventCounts_Count; // @dynamic subscribedParentEventCounts_Count;
@property(retain, nonatomic) GPBInt64ObjectDictionary *subscribedPublisherScores; // @dynamic subscribedPublisherScores;
@property(readonly, nonatomic) unsigned long long subscribedPublisherScores_Count; // @dynamic subscribedPublisherScores_Count;
@property(retain, nonatomic) GPBInt64Array *subscribedPublishersArray; // @dynamic subscribedPublishersArray;
@property(readonly, nonatomic) unsigned long long subscribedPublishersArray_Count; // @dynamic subscribedPublishersArray_Count;
@property(retain, nonatomic) NSMutableArray *subscribedStoriesArray; // @dynamic subscribedStoriesArray;
@property(readonly, nonatomic) unsigned long long subscribedStoriesArray_Count; // @dynamic subscribedStoriesArray_Count;
@property(retain, nonatomic) NSMutableArray *subscribedUserScoresArray; // @dynamic subscribedUserScoresArray;
@property(readonly, nonatomic) unsigned long long subscribedUserScoresArray_Count; // @dynamic subscribedUserScoresArray_Count;
@property(copy, nonatomic) NSData *unsubscribedUsers; // @dynamic unsubscribedUsers;

@end

