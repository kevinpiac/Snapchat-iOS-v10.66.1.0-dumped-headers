//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IMPMarkCollectionProfileAsSeenRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientTimestampMs; // @dynamic clientTimestampMs;
@property(copy, nonatomic) NSString *owningCollectionId; // @dynamic owningCollectionId;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

