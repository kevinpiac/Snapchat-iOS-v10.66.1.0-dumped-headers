//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSNumber, NSString;

@protocol SCSnapchattersUserInfoRepository
@property(readonly, copy, nonatomic) NSArray *bestFriendsUsernames;
@property(readonly, copy, nonatomic) NSString *deltaFriendToken;
@property(readonly, copy, nonatomic) NSString *deltaIncomingFriendToken;
@property(readonly, nonatomic) _Bool hasGrantedContactAccessAndPhoneVerified;
@property(readonly, nonatomic) NSNumber *incomingFriendsLastViewedTimestamp;
@property(readonly, nonatomic) _Bool isAspiringInfluencer;
@property(nonatomic) _Bool isContactSyncEnabled;
@property(nonatomic) long long storyPrivacy;
@property(readonly, copy, nonatomic) NSString *userId;
@end

