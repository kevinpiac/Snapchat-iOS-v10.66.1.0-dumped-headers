//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCAdsDiscoverPage_Feed : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool adsDisabled; // @dynamic adsDisabled;
@property(nonatomic) int feedStyle; // @dynamic feedStyle;
@property(nonatomic) int feedType; // @dynamic feedType;
@property(nonatomic) unsigned int minAdsPos; // @dynamic minAdsPos;
@property(retain, nonatomic) NSMutableArray *sccTagsArray; // @dynamic sccTagsArray;
@property(readonly, nonatomic) unsigned long long sccTagsArray_Count; // @dynamic sccTagsArray_Count;
@property(retain, nonatomic) NSMutableArray *storiesArray; // @dynamic storiesArray;
@property(readonly, nonatomic) unsigned long long storiesArray_Count; // @dynamic storiesArray_Count;
@property(nonatomic) unsigned int storyOffset; // @dynamic storyOffset;

@end
