//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBServiceOptions, NSMutableArray, NSString;

@interface GPBServiceDescriptorProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(retain, nonatomic) NSMutableArray *methodArray; // @dynamic methodArray;
@property(readonly, nonatomic) unsigned long long methodArray_Count; // @dynamic methodArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBServiceOptions *options; // @dynamic options;

@end

