//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface MLBAuthRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *appAuthResponse; // @dynamic appAuthResponse;
@property(nonatomic) int authOperation; // @dynamic authOperation;
@property(nonatomic) _Bool hasAppAuthResponse; // @dynamic hasAppAuthResponse;
@property(nonatomic) _Bool hasAuthOperation; // @dynamic hasAuthOperation;
@property(nonatomic) _Bool hasMfiChallenge; // @dynamic hasMfiChallenge;
@property(copy, nonatomic) NSData *mfiChallenge; // @dynamic mfiChallenge;

@end

