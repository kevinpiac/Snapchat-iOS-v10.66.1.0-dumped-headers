//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class MLBRange, NSData;

@interface MLBGpsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *fileData; // @dynamic fileData;
@property(retain, nonatomic) MLBRange *fileRange; // @dynamic fileRange;
@property(nonatomic) _Bool hasFileData; // @dynamic hasFileData;
@property(nonatomic) _Bool hasFileRange; // @dynamic hasFileRange;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int type; // @dynamic type;

@end

