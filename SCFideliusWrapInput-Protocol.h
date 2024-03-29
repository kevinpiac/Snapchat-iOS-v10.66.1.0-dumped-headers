//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString, SOJUSecurityFideliusFriendsKeysResponse;

@protocol SCFideliusWrapInput <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *clientId;
@property(readonly, copy, nonatomic) NSString *key;
@property(readonly, copy, nonatomic) NSArray *recipientUsernames;
@property(readonly, nonatomic) long long rewrapCount;
@property(readonly, copy, nonatomic) SOJUSecurityFideliusFriendsKeysResponse *rewrapFriendKeys;
@end

