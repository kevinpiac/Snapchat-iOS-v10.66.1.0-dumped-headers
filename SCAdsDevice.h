//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SCAdsDevice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *buildNumber; // @dynamic buildNumber;
@property(copy, nonatomic) NSString *deviceLanguage; // @dynamic deviceLanguage;
@property(copy, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(copy, nonatomic) NSData *idfa; // @dynamic idfa;
@property(nonatomic) long long osVersionNumeric; // @dynamic osVersionNumeric;
@property(nonatomic) int platformType; // @dynamic platformType;
@property(nonatomic) _Bool soundIsOn; // @dynamic soundIsOn;

@end

