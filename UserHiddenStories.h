//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface UserHiddenStories : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *hiddenStories; // @dynamic hiddenStories;
@property(readonly, nonatomic) unsigned long long hiddenStories_Count; // @dynamic hiddenStories_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

