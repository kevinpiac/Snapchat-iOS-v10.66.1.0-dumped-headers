//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class AvatarData;

@interface CreateAvatarDataRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AvatarData *avatarData; // @dynamic avatarData;
@property(nonatomic) _Bool hasAvatarData; // @dynamic hasAvatarData;
@property(nonatomic) long long touVersion; // @dynamic touVersion;

@end

