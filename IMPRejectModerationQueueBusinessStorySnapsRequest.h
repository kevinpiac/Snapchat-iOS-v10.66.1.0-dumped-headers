//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPRejectModerationQueueBusinessStorySnapsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(retain, nonatomic) NSMutableArray *snapIdsArray; // @dynamic snapIdsArray;
@property(readonly, nonatomic) unsigned long long snapIdsArray_Count; // @dynamic snapIdsArray_Count;

@end

