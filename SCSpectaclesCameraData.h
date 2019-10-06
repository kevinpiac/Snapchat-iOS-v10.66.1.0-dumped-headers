//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray;

@interface SCSpectaclesCameraData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double focalLength; // @dynamic focalLength;
@property(nonatomic) int height; // @dynamic height;
@property(retain, nonatomic) GPBFloatArray *leftCameraExtrinsicsArray; // @dynamic leftCameraExtrinsicsArray;
@property(readonly, nonatomic) unsigned long long leftCameraExtrinsicsArray_Count; // @dynamic leftCameraExtrinsicsArray_Count;
@property(nonatomic) float principalPointX; // @dynamic principalPointX;
@property(nonatomic) float principalPointY; // @dynamic principalPointY;
@property(retain, nonatomic) GPBFloatArray *rightCameraExtrinsicsArray; // @dynamic rightCameraExtrinsicsArray;
@property(readonly, nonatomic) unsigned long long rightCameraExtrinsicsArray_Count; // @dynamic rightCameraExtrinsicsArray_Count;
@property(nonatomic) int width; // @dynamic width;

@end

