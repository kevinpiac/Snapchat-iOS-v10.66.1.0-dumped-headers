//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMTActionSticker;

@interface SCMTUpdateActionStickerRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMTActionSticker *actionSticker; // @dynamic actionSticker;
@property(copy, nonatomic) NSString *ghostId; // @dynamic ghostId;
@property(nonatomic) _Bool hasActionSticker; // @dynamic hasActionSticker;

@end

