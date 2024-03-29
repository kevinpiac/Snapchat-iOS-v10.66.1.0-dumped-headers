//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64ObjectDictionary, NSMutableArray, NSMutableDictionary, NSString, SCSUPCognacEngagement, SCSUPLensEngagement, SCSUPMapStoryUserEngagement, SCSUPPublicUserEngagement, SCSUPPublisherEngagement, SCSUPSectionEngagement;

@interface SCSUPContentEngagement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *categoryEngagement; // @dynamic categoryEngagement;
@property(readonly, nonatomic) unsigned long long categoryEngagement_Count; // @dynamic categoryEngagement_Count;
@property(retain, nonatomic) SCSUPCognacEngagement *cognacEngagement; // @dynamic cognacEngagement;
@property(retain, nonatomic) NSMutableArray *contentTypePreferenceArray; // @dynamic contentTypePreferenceArray;
@property(readonly, nonatomic) unsigned long long contentTypePreferenceArray_Count; // @dynamic contentTypePreferenceArray_Count;
@property(retain, nonatomic) NSMutableArray *contentTypePreferenceNormalizedArray; // @dynamic contentTypePreferenceNormalizedArray;
@property(readonly, nonatomic) unsigned long long contentTypePreferenceNormalizedArray_Count; // @dynamic contentTypePreferenceNormalizedArray_Count;
@property(retain, nonatomic) GPBInt64ObjectDictionary *discoverEngagementsInPastMonth; // @dynamic discoverEngagementsInPastMonth;
@property(readonly, nonatomic) unsigned long long discoverEngagementsInPastMonth_Count; // @dynamic discoverEngagementsInPastMonth_Count;
@property(retain, nonatomic) NSMutableArray *dynamicStoryEngagementsInPastMonthArray; // @dynamic dynamicStoryEngagementsInPastMonthArray;
@property(readonly, nonatomic) unsigned long long dynamicStoryEngagementsInPastMonthArray_Count; // @dynamic dynamicStoryEngagementsInPastMonthArray_Count;
@property(nonatomic) _Bool hasCognacEngagement; // @dynamic hasCognacEngagement;
@property(nonatomic) _Bool hasLensEngagement; // @dynamic hasLensEngagement;
@property(nonatomic) _Bool hasMapStoryEngagement; // @dynamic hasMapStoryEngagement;
@property(nonatomic) _Bool hasPublicUserEngagement; // @dynamic hasPublicUserEngagement;
@property(nonatomic) _Bool hasPublisherEngagement; // @dynamic hasPublisherEngagement;
@property(nonatomic) _Bool hasSectionEngagement; // @dynamic hasSectionEngagement;
@property(nonatomic) long long lastUpdatedTimestampInMsecs; // @dynamic lastUpdatedTimestampInMsecs;
@property(nonatomic) int lastUpdatedTimestampInSecs; // @dynamic lastUpdatedTimestampInSecs;
@property(retain, nonatomic) SCSUPLensEngagement *lensEngagement; // @dynamic lensEngagement;
@property(retain, nonatomic) SCSUPMapStoryUserEngagement *mapStoryEngagement; // @dynamic mapStoryEngagement;
@property(retain, nonatomic) SCSUPPublicUserEngagement *publicUserEngagement; // @dynamic publicUserEngagement;
@property(retain, nonatomic) SCSUPPublisherEngagement *publisherEngagement; // @dynamic publisherEngagement;
@property(retain, nonatomic) SCSUPSectionEngagement *sectionEngagement; // @dynamic sectionEngagement;
@property(retain, nonatomic) NSMutableArray *storyCorpusStatsArray; // @dynamic storyCorpusStatsArray;
@property(readonly, nonatomic) unsigned long long storyCorpusStatsArray_Count; // @dynamic storyCorpusStatsArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

