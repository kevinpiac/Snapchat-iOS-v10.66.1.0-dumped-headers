//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCGIGroupInvite;

@interface SCGIUpdateUserEventRSVPResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInvite; // @dynamic hasInvite;
@property(retain, nonatomic) SCGIGroupInvite *invite; // @dynamic invite;

@end

