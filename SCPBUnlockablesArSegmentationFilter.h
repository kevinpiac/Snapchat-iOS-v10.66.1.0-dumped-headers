//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCPBContextFilterSkyItem, SCPBPurikuraPatternItem;

@interface SCPBUnlockablesArSegmentationFilter : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPortrait; // @dynamic hasPortrait;
@property(nonatomic) _Bool hasSky; // @dynamic hasSky;
@property(retain, nonatomic) SCPBPurikuraPatternItem *portrait; // @dynamic portrait;
@property(nonatomic) _Bool shouldStillDisplayWithoutSegmentationMatch; // @dynamic shouldStillDisplayWithoutSegmentationMatch;
@property(retain, nonatomic) SCPBContextFilterSkyItem *sky; // @dynamic sky;

@end

