//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCMTPoint;

@interface SCMTHeatmapFuzzPoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPoint; // @dynamic hasPoint;
@property(nonatomic) double initialZoomLevel; // @dynamic initialZoomLevel;
@property(retain, nonatomic) SCMTPoint *point; // @dynamic point;
@property(nonatomic) double weight; // @dynamic weight;

@end
