//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, SCSQNInteractionsStoryId;

@interface SCSQNStoryFeedbackAggregation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long aggregationMinTimeMsecs; // @dynamic aggregationMinTimeMsecs;
@property(nonatomic) unsigned long long aggregationWindowMsecs; // @dynamic aggregationWindowMsecs;
@property(retain, nonatomic) NSMutableDictionary *features; // @dynamic features;
@property(readonly, nonatomic) unsigned long long features_Count; // @dynamic features_Count;
@property(nonatomic) _Bool hasInteractionsStoryId; // @dynamic hasInteractionsStoryId;
@property(nonatomic) _Bool hasTriggeringStoryId; // @dynamic hasTriggeringStoryId;
@property(retain, nonatomic) SCSQNInteractionsStoryId *interactionsStoryId; // @dynamic interactionsStoryId;
@property(retain, nonatomic) SCSQNInteractionsStoryId *triggeringStoryId; // @dynamic triggeringStoryId;

@end

