//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCAdsMediaRenderInfo;

@interface SCAdsLongformVideo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long bottomSnapMediaDurationMs; // @dynamic bottomSnapMediaDurationMs;
@property(retain, nonatomic) SCAdsMediaRenderInfo *firstFrameImageInfo; // @dynamic firstFrameImageInfo;
@property(nonatomic) _Bool hasFirstFrameImageInfo; // @dynamic hasFirstFrameImageInfo;
@property(nonatomic) _Bool hasVideoRenderInfo; // @dynamic hasVideoRenderInfo;
@property(retain, nonatomic) SCAdsMediaRenderInfo *videoRenderInfo; // @dynamic videoRenderInfo;

@end

