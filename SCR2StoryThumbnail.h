//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSString;

@interface SCR2StoryThumbnail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float aspectRatio; // @dynamic aspectRatio;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(copy, nonatomic) NSString *thumbnailIv; // @dynamic thumbnailIv;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;
@property(retain, nonatomic) GPBEnumArray *thumbnailVariantsArray; // @dynamic thumbnailVariantsArray;
@property(readonly, nonatomic) unsigned long long thumbnailVariantsArray_Count; // @dynamic thumbnailVariantsArray_Count;
@property(copy, nonatomic) NSString *videoFirstFrameThumbnailURL; // @dynamic videoFirstFrameThumbnailURL;
@property(copy, nonatomic) NSString *videoThumbnailURL; // @dynamic videoThumbnailURL;

@end

