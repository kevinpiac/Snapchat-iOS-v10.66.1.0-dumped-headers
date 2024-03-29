//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCMTHeatmapGradient, SCMTPointOfInterestSizeEquation;

@interface SCMTRenderConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float fuzzNormalizationPeak; // @dynamic fuzzNormalizationPeak;
@property(nonatomic) _Bool hasHeatmapGradient; // @dynamic hasHeatmapGradient;
@property(nonatomic) _Bool hasPoiSizeEquation; // @dynamic hasPoiSizeEquation;
@property(nonatomic) float heatNormalizationPeak; // @dynamic heatNormalizationPeak;
@property(nonatomic) float heatPointBaseRadius; // @dynamic heatPointBaseRadius;
@property(retain, nonatomic) SCMTHeatmapGradient *heatmapGradient; // @dynamic heatmapGradient;
@property(retain, nonatomic) SCMTPointOfInterestSizeEquation *poiSizeEquation; // @dynamic poiSizeEquation;

@end

