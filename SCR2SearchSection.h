//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCR2SectionConfig;

@interface SCR2SearchSection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cardsArray; // @dynamic cardsArray;
@property(readonly, nonatomic) unsigned long long cardsArray_Count; // @dynamic cardsArray_Count;
@property(retain, nonatomic) NSMutableDictionary *debugMap; // @dynamic debugMap;
@property(readonly, nonatomic) unsigned long long debugMap_Count; // @dynamic debugMap_Count;
@property(nonatomic) _Bool hasSectionConfig; // @dynamic hasSectionConfig;
@property(nonatomic) _Bool onlyShowWhenNoResults; // @dynamic onlyShowWhenNoResults;
@property(retain, nonatomic) SCR2SectionConfig *sectionConfig; // @dynamic sectionConfig;
@property(copy, nonatomic) NSString *sectionId; // @dynamic sectionId;
@property(nonatomic) int sectionSemanticKey; // @dynamic sectionSemanticKey;
@property(nonatomic) int sectionType; // @dynamic sectionType;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int titleDisplayRule; // @dynamic titleDisplayRule;

@end

