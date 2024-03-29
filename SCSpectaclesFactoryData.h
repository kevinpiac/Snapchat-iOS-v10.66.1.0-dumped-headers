//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray;

@interface SCSpectaclesFactoryData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBDoubleArray *calibrationAccelerometerRawArray; // @dynamic calibrationAccelerometerRawArray;
@property(readonly, nonatomic) unsigned long long calibrationAccelerometerRawArray_Count; // @dynamic calibrationAccelerometerRawArray_Count;
@property(retain, nonatomic) GPBDoubleArray *calibrationGyroRawArray; // @dynamic calibrationGyroRawArray;
@property(readonly, nonatomic) unsigned long long calibrationGyroRawArray_Count; // @dynamic calibrationGyroRawArray_Count;
@property(nonatomic) float clbVersion; // @dynamic clbVersion;
@property(retain, nonatomic) GPBDoubleArray *jigRotationDegreesArray; // @dynamic jigRotationDegreesArray;
@property(readonly, nonatomic) unsigned long long jigRotationDegreesArray_Count; // @dynamic jigRotationDegreesArray_Count;

@end

