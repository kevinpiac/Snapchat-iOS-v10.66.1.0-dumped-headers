//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSSRVCreateSnapSharingRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int requestOrigin; // @dynamic requestOrigin;
@property(copy, nonatomic) NSString *shareId; // @dynamic shareId;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;

@end
