//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSUPABExperiments : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long retrievalTimestampMs; // @dynamic retrievalTimestampMs;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSMutableArray *studyInfosArray; // @dynamic studyInfosArray;
@property(readonly, nonatomic) unsigned long long studyInfosArray_Count; // @dynamic studyInfosArray_Count;

@end

