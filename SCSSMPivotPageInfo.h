//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, SCSSMPivotPrefetchMetadata;

@interface SCSSMPivotPageInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *feedTypesArray; // @dynamic feedTypesArray;
@property(readonly, nonatomic) unsigned long long feedTypesArray_Count; // @dynamic feedTypesArray_Count;
@property(nonatomic) _Bool hasPivotPrefetchMetadata; // @dynamic hasPivotPrefetchMetadata;
@property(retain, nonatomic) SCSSMPivotPrefetchMetadata *pivotPrefetchMetadata; // @dynamic pivotPrefetchMetadata;
@property(nonatomic) int theme; // @dynamic theme;

@end
