//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface IMPInternalBusinessProfileMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *publisherIconURL; // @dynamic publisherIconURL;
@property(copy, nonatomic) NSData *publisherMetadata; // @dynamic publisherMetadata;
@property(nonatomic) long long subscriberShardCount; // @dynamic subscriberShardCount;

@end
