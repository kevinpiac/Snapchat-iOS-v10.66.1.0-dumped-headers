//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, VLKRange;

@interface VLKMediaFileTransferRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool dataPacket; // @dynamic dataPacket;
@property(nonatomic) _Bool hasDataPacket; // @dynamic hasDataPacket;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasRange; // @dynamic hasRange;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) VLKRange *range; // @dynamic range;

@end

