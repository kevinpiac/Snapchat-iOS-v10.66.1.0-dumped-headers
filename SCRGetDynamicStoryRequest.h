//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray, NSString;

@interface SCRGetDynamicStoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float boundingBoxHalfHeight; // @dynamic boundingBoxHalfHeight;
@property(nonatomic) float boundingBoxHalfWidth; // @dynamic boundingBoxHalfWidth;
@property(nonatomic) _Bool debug; // @dynamic debug;
@property(retain, nonatomic) GPBFloatArray *imageFeatureVectorArray; // @dynamic imageFeatureVectorArray;
@property(readonly, nonatomic) unsigned long long imageFeatureVectorArray_Count; // @dynamic imageFeatureVectorArray_Count;
@property(copy, nonatomic) NSString *imageFeatureVectorVersion; // @dynamic imageFeatureVectorVersion;
@property(nonatomic) float lat; // @dynamic lat;
@property(nonatomic) float lng; // @dynamic lng;
@property(copy, nonatomic) NSString *queryText; // @dynamic queryText;
@property(copy, nonatomic) NSString *storyType; // @dynamic storyType;
@property(copy, nonatomic) NSString *strategy; // @dynamic strategy;

@end

