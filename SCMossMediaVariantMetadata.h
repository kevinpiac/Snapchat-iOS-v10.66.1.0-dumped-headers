//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCMossThumbnailMetadata, SCMossVideoMetadata;

@interface SCMossMediaVariantMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int metadataOneOfCase; // @dynamic metadataOneOfCase;
@property(retain, nonatomic) SCMossThumbnailMetadata *thumbnailMetadata; // @dynamic thumbnailMetadata;
@property(retain, nonatomic) SCMossVideoMetadata *videoMetadata; // @dynamic videoMetadata;

@end
