//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface MLBUbloxMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int classId; // @dynamic classId;
@property(nonatomic) _Bool hasClassId; // @dynamic hasClassId;
@property(nonatomic) _Bool hasMsgId; // @dynamic hasMsgId;
@property(nonatomic) _Bool hasPayload; // @dynamic hasPayload;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;

@end

