//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPThemeEntity, SCSUPThemeStory, SCSUPThemeTopic;

@interface SCSUPDynamicChannel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float confidence; // @dynamic confidence;
@property(retain, nonatomic) SCSUPThemeEntity *themeEntity; // @dynamic themeEntity;
@property(readonly, nonatomic) int themeOneOfCase; // @dynamic themeOneOfCase;
@property(retain, nonatomic) SCSUPThemeStory *themeStory; // @dynamic themeStory;
@property(retain, nonatomic) SCSUPThemeTopic *themeTopic; // @dynamic themeTopic;

@end

