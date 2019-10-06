//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSMutableArray, NSMutableDictionary, NSString, SCR2CandidateStoriesRequest, SCR2CategoricalRequest, SCR2CognacClientInfo, SCR2GeofilterStoryRequest, SCR2MapPipelineRequest, SCR2PartialPostTypeRequest, SCR2PartialStoryRequest, SCR2PostTypeRequest, SCR2PreTypeRequest, SCR2PublicUserRequest, SCR2SharedStoryRequest, SCR2ShazamRequest, SCR2SnapFeedRequest, SCR2SnapPivotStoriesRequest, SCR2SnapToStoriesRequest, SCR2WatchNextRequest;

@interface SCR2SearchRequest : GPBMessage
{
}

+ (id)descriptor;
- (void)setBooleanTweakForKey:(id)arg1 value:(_Bool)arg2;
- (void)setFloatTweakForKey:(id)arg1 value:(double)arg2;
- (void)setIntTweakForKey:(id)arg1 value:(int)arg2;
- (void)setStringTweakForKey:(id)arg1 value:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SCR2CandidateStoriesRequest *candidateStoriesRequest; // @dynamic candidateStoriesRequest;
@property(retain, nonatomic) SCR2CategoricalRequest *categoricalRequest; // @dynamic categoricalRequest;
@property(retain, nonatomic) SCR2CognacClientInfo *cognacClientInfo; // @dynamic cognacClientInfo;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) long long creationTimestampMs; // @dynamic creationTimestampMs;
@property(nonatomic) int debugLevel; // @dynamic debugLevel;
@property(retain, nonatomic) NSMutableDictionary *debugMap; // @dynamic debugMap;
@property(readonly, nonatomic) unsigned long long debugMap_Count; // @dynamic debugMap_Count;
@property(nonatomic) int entryPoint; // @dynamic entryPoint;
@property(retain, nonatomic) NSMutableDictionary *expConfigMap; // @dynamic expConfigMap;
@property(readonly, nonatomic) unsigned long long expConfigMap_Count; // @dynamic expConfigMap_Count;
@property(copy, nonatomic) NSString *experimentSetting; // @dynamic experimentSetting;
@property(retain, nonatomic) NSMutableDictionary *extraLogData; // @dynamic extraLogData;
@property(readonly, nonatomic) unsigned long long extraLogData_Count; // @dynamic extraLogData_Count;
@property(retain, nonatomic) SCR2GeofilterStoryRequest *geofilterStoryRequest; // @dynamic geofilterStoryRequest;
@property(nonatomic) _Bool hasBitmojiAvatar; // @dynamic hasBitmojiAvatar;
@property(nonatomic) _Bool hasCognacClientInfo; // @dynamic hasCognacClientInfo;
@property(nonatomic) _Bool isLocationDisabled; // @dynamic isLocationDisabled;
@property(retain, nonatomic) NSMutableArray *languagePreferencesArray; // @dynamic languagePreferencesArray;
@property(readonly, nonatomic) unsigned long long languagePreferencesArray_Count; // @dynamic languagePreferencesArray_Count;
@property(retain, nonatomic) GPBInt64Array *lastInteractionTimestampsMsArray; // @dynamic lastInteractionTimestampsMsArray;
@property(readonly, nonatomic) unsigned long long lastInteractionTimestampsMsArray_Count; // @dynamic lastInteractionTimestampsMsArray_Count;
@property(retain, nonatomic) SCR2MapPipelineRequest *mapPipelineRequest; // @dynamic mapPipelineRequest;
@property(nonatomic) int origin; // @dynamic origin;
@property(retain, nonatomic) SCR2PartialPostTypeRequest *partialPostTypeRequest; // @dynamic partialPostTypeRequest;
@property(retain, nonatomic) SCR2PartialStoryRequest *partialStoryRequest; // @dynamic partialStoryRequest;
@property(retain, nonatomic) SCR2PostTypeRequest *postTypeRequest; // @dynamic postTypeRequest;
@property(retain, nonatomic) SCR2PreTypeRequest *preTypeRequest; // @dynamic preTypeRequest;
@property(retain, nonatomic) SCR2PublicUserRequest *publicUserRequest; // @dynamic publicUserRequest;
@property(readonly, nonatomic) int requestTypeParamsOneOfCase; // @dynamic requestTypeParamsOneOfCase;
@property(copy, nonatomic) NSString *searchSessionId; // @dynamic searchSessionId;
@property(copy, nonatomic) NSString *searchSessionQueryId; // @dynamic searchSessionQueryId;
@property(retain, nonatomic) SCR2SharedStoryRequest *sharedStoryRequest; // @dynamic sharedStoryRequest;
@property(retain, nonatomic) SCR2ShazamRequest *shazamRequest; // @dynamic shazamRequest;
@property(retain, nonatomic) SCR2SnapFeedRequest *snapFeedRequest; // @dynamic snapFeedRequest;
@property(retain, nonatomic) SCR2SnapPivotStoriesRequest *snapPivotStoriesRequest; // @dynamic snapPivotStoriesRequest;
@property(retain, nonatomic) SCR2SnapToStoriesRequest *snapToStoriesRequest; // @dynamic snapToStoriesRequest;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) NSMutableDictionary *tweakParameters; // @dynamic tweakParameters;
@property(readonly, nonatomic) unsigned long long tweakParameters_Count; // @dynamic tweakParameters_Count;
@property(retain, nonatomic) SCR2WatchNextRequest *watchNextRequest; // @dynamic watchNextRequest;

@end

