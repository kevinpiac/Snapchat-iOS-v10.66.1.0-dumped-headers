//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCPBSnaptokenSnapAccessTokenPrefetchHint;

@interface SCPBSnaptokenSnapAccessTokensResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPrefetchHint; // @dynamic hasPrefetchHint;
@property(retain, nonatomic) SCPBSnaptokenSnapAccessTokenPrefetchHint *prefetchHint; // @dynamic prefetchHint;
@property(retain, nonatomic) NSMutableArray *snapAccessTokensArray; // @dynamic snapAccessTokensArray;
@property(readonly, nonatomic) unsigned long long snapAccessTokensArray_Count; // @dynamic snapAccessTokensArray_Count;
@property(nonatomic) int status; // @dynamic status;

@end

