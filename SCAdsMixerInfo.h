//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCAdsSubsBrandSafety;

@interface SCAdsMixerInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int feedType; // @dynamic feedType;
@property(nonatomic) _Bool hasSubsBrandSafety; // @dynamic hasSubsBrandSafety;
@property(nonatomic) unsigned int minAdsPos; // @dynamic minAdsPos;
@property(nonatomic) unsigned int storyOffset; // @dynamic storyOffset;
@property(retain, nonatomic) SCAdsSubsBrandSafety *subsBrandSafety; // @dynamic subsBrandSafety;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

