//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GPBMethod : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(nonatomic) _Bool requestStreaming; // @dynamic requestStreaming;
@property(copy, nonatomic) NSString *requestTypeURL; // @dynamic requestTypeURL;
@property(nonatomic) _Bool responseStreaming; // @dynamic responseStreaming;
@property(copy, nonatomic) NSString *responseTypeURL; // @dynamic responseTypeURL;
@property(nonatomic) int syntax; // @dynamic syntax;

@end

