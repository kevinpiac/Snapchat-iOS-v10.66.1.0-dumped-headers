//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class MLBDroppedFramesData;

@interface MLBVideoData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int codec; // @dynamic codec;
@property(retain, nonatomic) MLBDroppedFramesData *droppedFramesData; // @dynamic droppedFramesData;
@property(nonatomic) int durationMs; // @dynamic durationMs;
@property(nonatomic) _Bool hasCodec; // @dynamic hasCodec;
@property(nonatomic) _Bool hasDroppedFramesData; // @dynamic hasDroppedFramesData;
@property(nonatomic) _Bool hasDurationMs; // @dynamic hasDurationMs;
@property(nonatomic) _Bool hasLastRecordAborted; // @dynamic hasLastRecordAborted;
@property(nonatomic) _Bool hasRequestedVideoCount; // @dynamic hasRequestedVideoCount;
@property(nonatomic) _Bool lastRecordAborted; // @dynamic lastRecordAborted;
@property(nonatomic) int requestedVideoCount; // @dynamic requestedVideoCount;

@end

