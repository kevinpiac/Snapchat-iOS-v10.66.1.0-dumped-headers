//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMessagingMediaMetadata;

@interface SCMessagingLegacyShazamShare : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *attachedURL; // @dynamic attachedURL;
@property(nonatomic) _Bool hasMedia; // @dynamic hasMedia;
@property(retain, nonatomic) SCMessagingMediaMetadata *media; // @dynamic media;

@end

