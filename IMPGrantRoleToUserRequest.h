//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class IMPRoleSpecification, NSString;

@interface IMPGrantRoleToUserRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(nonatomic) _Bool hasRole; // @dynamic hasRole;
@property(copy, nonatomic) NSString *receivingUserId; // @dynamic receivingUserId;
@property(retain, nonatomic) IMPRoleSpecification *role; // @dynamic role;
@property(copy, nonatomic) NSString *roleType; // @dynamic roleType;

@end
