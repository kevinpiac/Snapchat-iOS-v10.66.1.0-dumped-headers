//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, GPBInt32Value;

@interface IMPUserSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHighlightsNuxSeen; // @dynamic hasHighlightsNuxSeen;
@property(nonatomic) _Bool hasManageRolesNuxHintViewCount; // @dynamic hasManageRolesNuxHintViewCount;
@property(nonatomic) _Bool hasUnifiedProfileNuxSeen; // @dynamic hasUnifiedProfileNuxSeen;
@property(retain, nonatomic) GPBBoolValue *highlightsNuxSeen; // @dynamic highlightsNuxSeen;
@property(retain, nonatomic) GPBInt32Value *manageRolesNuxHintViewCount; // @dynamic manageRolesNuxHintViewCount;
@property(retain, nonatomic) GPBBoolValue *unifiedProfileNuxSeen; // @dynamic unifiedProfileNuxSeen;

@end
