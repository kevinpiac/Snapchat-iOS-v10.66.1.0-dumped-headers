//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSCOREUUID;

@interface ViewState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSnapOwnerId; // @dynamic hasSnapOwnerId;
@property(nonatomic) long long screenshotTimeMs; // @dynamic screenshotTimeMs;
@property(retain, nonatomic) SCSCOREUUID *snapOwnerId; // @dynamic snapOwnerId;
@property(nonatomic) long long viewTimeMs; // @dynamic viewTimeMs;

@end

