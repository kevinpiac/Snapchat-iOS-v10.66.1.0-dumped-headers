//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPBusinessUserSettings;

@interface IMPInternalGetBusinessUserSettingsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUserSettings; // @dynamic hasUserSettings;
@property(retain, nonatomic) IMPBusinessUserSettings *userSettings; // @dynamic userSettings;

@end

