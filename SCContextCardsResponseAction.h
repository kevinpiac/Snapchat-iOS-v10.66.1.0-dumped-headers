//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCContextCardsResponse;

@interface SCContextCardsResponseAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResponse; // @dynamic hasResponse;
@property(retain, nonatomic) NSMutableArray *queriesArray; // @dynamic queriesArray;
@property(readonly, nonatomic) unsigned long long queriesArray_Count; // @dynamic queriesArray_Count;
@property(retain, nonatomic) SCContextCardsResponse *response; // @dynamic response;

@end
