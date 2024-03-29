//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSLIClientInfo, SCSLIServerAttachedInfo;

@interface SCSLIEventsBatch : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSLIServerAttachedInfo *attachedInfo; // @dynamic attachedInfo;
@property(retain, nonatomic) SCSLIClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) NSMutableArray *eventsArray; // @dynamic eventsArray;
@property(readonly, nonatomic) unsigned long long eventsArray_Count; // @dynamic eventsArray_Count;
@property(nonatomic) _Bool hasAttachedInfo; // @dynamic hasAttachedInfo;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;

@end

