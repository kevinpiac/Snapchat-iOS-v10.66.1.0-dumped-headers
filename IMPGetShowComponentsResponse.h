//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface IMPGetShowComponentsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *episodesArray; // @dynamic episodesArray;
@property(readonly, nonatomic) unsigned long long episodesArray_Count; // @dynamic episodesArray_Count;
@property(retain, nonatomic) NSMutableArray *extrasArray; // @dynamic extrasArray;
@property(readonly, nonatomic) unsigned long long extrasArray_Count; // @dynamic extrasArray_Count;

@end
