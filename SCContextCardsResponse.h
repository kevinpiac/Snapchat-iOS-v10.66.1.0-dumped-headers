//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCContextCardsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool errorResponse; // @dynamic errorResponse;
@property(retain, nonatomic) NSMutableArray *resourcesArray; // @dynamic resourcesArray;
@property(readonly, nonatomic) unsigned long long resourcesArray_Count; // @dynamic resourcesArray_Count;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @dynamic sectionsArray;
@property(readonly, nonatomic) unsigned long long sectionsArray_Count; // @dynamic sectionsArray_Count;

@end

