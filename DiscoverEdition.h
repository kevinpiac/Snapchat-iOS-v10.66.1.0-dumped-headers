//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class Edition, NSString;

@interface DiscoverEdition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Edition *channel; // @dynamic channel;
@property(nonatomic) long long generationTs; // @dynamic generationTs;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(copy, nonatomic) NSString *validity; // @dynamic validity;

@end

