//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingRange, SCMessagingTextFormatAttribute, SCMessagingTextMediaAttribute, SCMessagingTextUrlAttribute;

@interface SCMessagingTextAttribute : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingTextUrlAttribute *URLAttribute; // @dynamic URLAttribute;
@property(readonly, nonatomic) int attributeOneOfCase; // @dynamic attributeOneOfCase;
@property(retain, nonatomic) SCMessagingTextFormatAttribute *formatAttribute; // @dynamic formatAttribute;
@property(nonatomic) _Bool hasRange; // @dynamic hasRange;
@property(retain, nonatomic) SCMessagingTextMediaAttribute *mediaAttribute; // @dynamic mediaAttribute;
@property(retain, nonatomic) SCMessagingRange *range; // @dynamic range;

@end
