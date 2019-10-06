//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class CameraSignals, ContentManagerSignals, FeatureProvidedSignals_SpectacleMetadata, FeatureProvidedSignals_StoryMetadata, SDMMediaMetadata;

@interface FeatureProvidedSignals : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CameraSignals *cameraSignals; // @dynamic cameraSignals;
@property(retain, nonatomic) ContentManagerSignals *contentManagerProvidedSignals; // @dynamic contentManagerProvidedSignals;
@property(nonatomic) _Bool hasCameraSignals; // @dynamic hasCameraSignals;
@property(nonatomic) _Bool hasContentManagerProvidedSignals; // @dynamic hasContentManagerProvidedSignals;
@property(nonatomic) _Bool hasMediaMetadata; // @dynamic hasMediaMetadata;
@property(nonatomic) _Bool hasSpectacleMetadata; // @dynamic hasSpectacleMetadata;
@property(nonatomic) _Bool hasStoryMetadata; // @dynamic hasStoryMetadata;
@property(retain, nonatomic) SDMMediaMetadata *mediaMetadata; // @dynamic mediaMetadata;
@property(nonatomic) int snapSource; // @dynamic snapSource;
@property(retain, nonatomic) FeatureProvidedSignals_SpectacleMetadata *spectacleMetadata; // @dynamic spectacleMetadata;
@property(retain, nonatomic) FeatureProvidedSignals_StoryMetadata *storyMetadata; // @dynamic storyMetadata;

@end

