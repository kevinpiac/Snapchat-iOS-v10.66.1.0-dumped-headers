//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32ObjectDictionary;

@interface SCSSMLayoutDescription : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int firstServedTsSecs; // @dynamic firstServedTsSecs;
@property(retain, nonatomic) GPBInt32ObjectDictionary *sectionPositions; // @dynamic sectionPositions;
@property(readonly, nonatomic) unsigned long long sectionPositions_Count; // @dynamic sectionPositions_Count;

@end

