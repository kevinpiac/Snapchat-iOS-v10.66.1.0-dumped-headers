//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray, NSMutableArray, NSString;

@interface SCPBUnlockablesTextColor : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *colorArray; // @dynamic colorArray;
@property(readonly, nonatomic) unsigned long long colorArray_Count; // @dynamic colorArray_Count;
@property(nonatomic) double colorGradientAngleDegree; // @dynamic colorGradientAngleDegree;
@property(retain, nonatomic) GPBDoubleArray *colorStopArray; // @dynamic colorStopArray;
@property(readonly, nonatomic) unsigned long long colorStopArray_Count; // @dynamic colorStopArray_Count;
@property(copy, nonatomic) NSString *colorTransform; // @dynamic colorTransform;
@property(retain, nonatomic) GPBDoubleArray *colorTransformParamsArray; // @dynamic colorTransformParamsArray;
@property(readonly, nonatomic) unsigned long long colorTransformParamsArray_Count; // @dynamic colorTransformParamsArray_Count;

@end

