//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCPBUnlockablesSchedule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *endDateTime; // @dynamic endDateTime;
@property(retain, nonatomic) NSMutableArray *repeatIntervalsArray; // @dynamic repeatIntervalsArray;
@property(readonly, nonatomic) unsigned long long repeatIntervalsArray_Count; // @dynamic repeatIntervalsArray_Count;
@property(copy, nonatomic) NSString *repetitionEndDateTime; // @dynamic repetitionEndDateTime;
@property(copy, nonatomic) NSString *repetitionFrequency; // @dynamic repetitionFrequency;
@property(copy, nonatomic) NSString *schedulingType; // @dynamic schedulingType;
@property(copy, nonatomic) NSString *startDateTime; // @dynamic startDateTime;
@property(copy, nonatomic) NSString *timezone; // @dynamic timezone;
@property(nonatomic) _Bool useLocalTimezone; // @dynamic useLocalTimezone;
@property(copy, nonatomic) NSString *weeklyFrequency; // @dynamic weeklyFrequency;

@end

