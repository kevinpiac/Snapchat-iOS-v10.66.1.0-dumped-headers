//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IMPUserFollower : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long creationTimestamp; // @dynamic creationTimestamp;
@property(copy, nonatomic) NSString *datastoreId; // @dynamic datastoreId;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

