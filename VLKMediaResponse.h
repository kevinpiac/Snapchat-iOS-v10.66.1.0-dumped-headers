//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, VLKMediaRequest;

@interface VLKMediaResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *availableMediaArray; // @dynamic availableMediaArray;
@property(readonly, nonatomic) unsigned long long availableMediaArray_Count; // @dynamic availableMediaArray_Count;
@property(nonatomic) _Bool dataPacket; // @dynamic dataPacket;
@property(nonatomic) _Bool hasDataPacket; // @dynamic hasDataPacket;
@property(nonatomic) _Bool hasMediaData; // @dynamic hasMediaData;
@property(nonatomic) _Bool hasMediaRequestMetadata; // @dynamic hasMediaRequestMetadata;
@property(copy, nonatomic) NSData *mediaData; // @dynamic mediaData;
@property(retain, nonatomic) VLKMediaRequest *mediaRequestMetadata; // @dynamic mediaRequestMetadata;

@end

