//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SCRGetSearchCardsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *debugInfo; // @dynamic debugInfo;
@property(readonly, nonatomic) unsigned long long debugInfo_Count; // @dynamic debugInfo_Count;
@property(copy, nonatomic) NSString *entityInfoJson; // @dynamic entityInfoJson;
@property(retain, nonatomic) NSMutableArray *preTypeEmojiSuggestionsArray; // @dynamic preTypeEmojiSuggestionsArray;
@property(readonly, nonatomic) unsigned long long preTypeEmojiSuggestionsArray_Count; // @dynamic preTypeEmojiSuggestionsArray_Count;
@property(retain, nonatomic) NSMutableArray *queryTextSuggestionsArray; // @dynamic queryTextSuggestionsArray;
@property(readonly, nonatomic) unsigned long long queryTextSuggestionsArray_Count; // @dynamic queryTextSuggestionsArray_Count;
@property(retain, nonatomic) NSMutableArray *relatedSearchesArray; // @dynamic relatedSearchesArray;
@property(readonly, nonatomic) unsigned long long relatedSearchesArray_Count; // @dynamic relatedSearchesArray_Count;
@property(nonatomic) long long requestTime; // @dynamic requestTime;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @dynamic sectionsArray;
@property(readonly, nonatomic) unsigned long long sectionsArray_Count; // @dynamic sectionsArray_Count;
@property(nonatomic) unsigned int selectedSearchSuggestion; // @dynamic selectedSearchSuggestion;
@property(retain, nonatomic) NSMutableArray *suggestedQueriesArray; // @dynamic suggestedQueriesArray;
@property(readonly, nonatomic) unsigned long long suggestedQueriesArray_Count; // @dynamic suggestedQueriesArray_Count;
@property(retain, nonatomic) NSMutableDictionary *tweakParameters; // @dynamic tweakParameters;
@property(readonly, nonatomic) unsigned long long tweakParameters_Count; // @dynamic tweakParameters_Count;

@end

