//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, StoryDoc_ID;

@interface StoryDoc : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *envelopeArray; // @dynamic envelopeArray;
@property(readonly, nonatomic) unsigned long long envelopeArray_Count; // @dynamic envelopeArray_Count;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(retain, nonatomic) StoryDoc_ID *id_p; // @dynamic id_p;

@end
