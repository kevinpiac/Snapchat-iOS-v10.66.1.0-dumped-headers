//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCR2OpeningHours_DayHours : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int day; // @dynamic day;
@property(retain, nonatomic) NSMutableArray *hoursArray; // @dynamic hoursArray;
@property(readonly, nonatomic) unsigned long long hoursArray_Count; // @dynamic hoursArray_Count;

@end

