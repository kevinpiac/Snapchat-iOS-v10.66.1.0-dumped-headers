//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCORELensThumbnail;

@interface SCSSMLensObjectCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *creatorBitmojiAvatarId; // @dynamic creatorBitmojiAvatarId;
@property(copy, nonatomic) NSString *creatorBitmojiAvatarSelfieId; // @dynamic creatorBitmojiAvatarSelfieId;
@property(copy, nonatomic) NSString *creatorId; // @dynamic creatorId;
@property(copy, nonatomic) NSString *creatorName; // @dynamic creatorName;
@property(copy, nonatomic) NSString *deeplinkURL; // @dynamic deeplinkURL;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(nonatomic) _Bool isCreatorDeactivated; // @dynamic isCreatorDeactivated;
@property(nonatomic) _Bool isCreatorSubscribed; // @dynamic isCreatorSubscribed;
@property(nonatomic) _Bool isOfficialCreator; // @dynamic isOfficialCreator;
@property(nonatomic) _Bool isSubscriptionPinned; // @dynamic isSubscriptionPinned;
@property(nonatomic) long long lensId; // @dynamic lensId;
@property(copy, nonatomic) NSString *lensName; // @dynamic lensName;
@property(copy, nonatomic) NSString *snapProProfileId; // @dynamic snapProProfileId;
@property(retain, nonatomic) SCSCORELensThumbnail *thumbnail; // @dynamic thumbnail;

@end

