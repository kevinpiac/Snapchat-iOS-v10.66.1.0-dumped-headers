//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface SCR2LabelPersonalizedStoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *debugInfo; // @dynamic debugInfo;
@property(readonly, nonatomic) unsigned long long debugInfo_Count; // @dynamic debugInfo_Count;
@property(nonatomic) _Bool isCaptionInteresting; // @dynamic isCaptionInteresting;
@property(nonatomic) _Bool isStoryInteresting; // @dynamic isStoryInteresting;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

