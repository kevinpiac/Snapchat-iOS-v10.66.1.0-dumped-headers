//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, StyleInstanceKey;

@interface StylizationResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *debugInfo; // @dynamic debugInfo;
@property(nonatomic) _Bool hasStyleKey; // @dynamic hasStyleKey;
@property(copy, nonatomic) NSData *media; // @dynamic media;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(nonatomic) int statusCode; // @dynamic statusCode;
@property(retain, nonatomic) StyleInstanceKey *styleKey; // @dynamic styleKey;

@end

