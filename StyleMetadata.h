//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, StyleInstanceKey;

@interface StyleMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStyleKey; // @dynamic hasStyleKey;
@property(copy, nonatomic) NSString *minAndroidVersion; // @dynamic minAndroidVersion;
@property(copy, nonatomic) NSString *minAppVersion; // @dynamic minAppVersion;
@property(copy, nonatomic) NSString *minIosVersion; // @dynamic minIosVersion;
@property(retain, nonatomic) StyleInstanceKey *styleKey; // @dynamic styleKey;

@end
