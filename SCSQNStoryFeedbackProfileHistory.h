//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSQNInteractionsStoryId;

@interface SCSQNStoryFeedbackProfileHistory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contextHistoryArray; // @dynamic contextHistoryArray;
@property(readonly, nonatomic) unsigned long long contextHistoryArray_Count; // @dynamic contextHistoryArray_Count;
@property(nonatomic) _Bool hasInteractionsStoryId; // @dynamic hasInteractionsStoryId;
@property(nonatomic) _Bool hasTriggeringStoryId; // @dynamic hasTriggeringStoryId;
@property(retain, nonatomic) SCSQNInteractionsStoryId *interactionsStoryId; // @dynamic interactionsStoryId;
@property(retain, nonatomic) SCSQNInteractionsStoryId *triggeringStoryId; // @dynamic triggeringStoryId;

@end

