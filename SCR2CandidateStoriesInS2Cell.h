//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCR2CandidateStoriesInS2Cell : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *s2Cell; // @dynamic s2Cell;
@property(retain, nonatomic) NSMutableArray *storiesArray; // @dynamic storiesArray;
@property(readonly, nonatomic) unsigned long long storiesArray_Count; // @dynamic storiesArray_Count;

@end

