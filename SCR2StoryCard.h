//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, SCR2StoryMetadata;

@interface SCR2StoryCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *debugMap; // @dynamic debugMap;
@property(readonly, nonatomic) unsigned long long debugMap_Count; // @dynamic debugMap_Count;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) SCR2StoryMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) NSMutableArray *snapsArray; // @dynamic snapsArray;
@property(readonly, nonatomic) unsigned long long snapsArray_Count; // @dynamic snapsArray_Count;
@property(nonatomic) int uiType; // @dynamic uiType;

@end

