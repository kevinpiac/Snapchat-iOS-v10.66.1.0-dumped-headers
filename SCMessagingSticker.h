//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingCustomSticker, SCMessagingIncludedSticker;

@interface SCMessagingSticker : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingCustomSticker *custom; // @dynamic custom;
@property(retain, nonatomic) SCMessagingIncludedSticker *included; // @dynamic included;
@property(readonly, nonatomic) int stickerOneOfCase; // @dynamic stickerOneOfCase;

@end
