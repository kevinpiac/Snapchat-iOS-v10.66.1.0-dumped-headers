//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface IMPSearchBusinessProfilesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *businessProfilesArray; // @dynamic businessProfilesArray;
@property(readonly, nonatomic) unsigned long long businessProfilesArray_Count; // @dynamic businessProfilesArray_Count;
@property(retain, nonatomic) NSMutableArray *resultsArray; // @dynamic resultsArray;
@property(readonly, nonatomic) unsigned long long resultsArray_Count; // @dynamic resultsArray_Count;

@end

