//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMessagingUUID;

@interface SCMessagingGameMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appContentURL; // @dynamic appContentURL;
@property(copy, nonatomic) NSString *appDisplayName; // @dynamic appDisplayName;
@property(copy, nonatomic) NSString *appIconImageURL; // @dynamic appIconImageURL;
@property(retain, nonatomic) SCMessagingUUID *appId; // @dynamic appId;
@property(copy, nonatomic) NSString *appLoadingPageImageURL; // @dynamic appLoadingPageImageURL;
@property(copy, nonatomic) NSString *appLogoURL; // @dynamic appLogoURL;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;

@end

