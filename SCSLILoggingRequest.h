//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSLIEventsBatch, SCSLIMetadata;

@interface SCSLILoggingRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSLIEventsBatch *events; // @dynamic events;
@property(nonatomic) _Bool hasEvents; // @dynamic hasEvents;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) SCSLIMetadata *metadata; // @dynamic metadata;
@property(nonatomic) long long requestTimestampMsec; // @dynamic requestTimestampMsec;
@property(nonatomic) int source; // @dynamic source;

@end

