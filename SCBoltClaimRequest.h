//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCBoltReplicationPolicy;

@interface SCBoltClaimRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long cdnTtlSeconds; // @dynamic cdnTtlSeconds;
@property(nonatomic) unsigned long long expirationTimeMillis; // @dynamic expirationTimeMillis;
@property(copy, nonatomic) NSString *externalClaimId; // @dynamic externalClaimId;
@property(nonatomic) _Bool hasReplicationPolicy; // @dynamic hasReplicationPolicy;
@property(retain, nonatomic) SCBoltReplicationPolicy *replicationPolicy; // @dynamic replicationPolicy;

@end
