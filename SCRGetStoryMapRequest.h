//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCRGetStoryMapRequest_Heatmap;

@interface SCRGetStoryMapRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeatmap; // @dynamic hasHeatmap;
@property(retain, nonatomic) SCRGetStoryMapRequest_Heatmap *heatmap; // @dynamic heatmap;
@property(retain, nonatomic) NSMutableArray *markersArray; // @dynamic markersArray;
@property(readonly, nonatomic) unsigned long long markersArray_Count; // @dynamic markersArray_Count;

@end

