//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringDoubleDictionary, NSString;

@interface SnapBrainResponse_Results_SnapLang_NewsKeyword : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBStringDoubleDictionary *categoryScores; // @dynamic categoryScores;
@property(readonly, nonatomic) unsigned long long categoryScores_Count; // @dynamic categoryScores_Count;
@property(copy, nonatomic) NSString *keyword; // @dynamic keyword;

@end

