//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2SnapPivotInfo;

@interface SCR2SnapPivotStoriesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool excludeNearby; // @dynamic excludeNearby;
@property(nonatomic) _Bool hasPivotInfo; // @dynamic hasPivotInfo;
@property(nonatomic) _Bool isProbe; // @dynamic isProbe;
@property(retain, nonatomic) SCR2SnapPivotInfo *pivotInfo; // @dynamic pivotInfo;

@end

