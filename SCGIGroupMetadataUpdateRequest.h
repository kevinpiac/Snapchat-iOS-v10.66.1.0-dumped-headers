//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCGIGroupMetadata;

@interface SCGIGroupMetadataUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) SCGIGroupMetadata *metadata; // @dynamic metadata;

@end

