//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSString;

@interface GPBGeneratedCodeInfo_Annotation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int begin; // @dynamic begin;
@property(nonatomic) int end; // @dynamic end;
@property(nonatomic) _Bool hasBegin; // @dynamic hasBegin;
@property(nonatomic) _Bool hasEnd; // @dynamic hasEnd;
@property(nonatomic) _Bool hasSourceFile; // @dynamic hasSourceFile;
@property(retain, nonatomic) GPBInt32Array *pathArray; // @dynamic pathArray;
@property(readonly, nonatomic) unsigned long long pathArray_Count; // @dynamic pathArray_Count;
@property(copy, nonatomic) NSString *sourceFile; // @dynamic sourceFile;

@end
