//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol SOJUFriendsResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *addedFriends;
@property(readonly, copy, nonatomic) NSString *addedFriendsSyncToken;
@property(readonly, copy, nonatomic) NSString *addedFriendsSyncType;
@property(readonly, copy, nonatomic) NSArray *bests;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiMutableDict;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiReadOnlyDict;
@property(readonly, copy, nonatomic) NSArray *friends;
@property(readonly, copy, nonatomic) NSString *friendsSyncToken;
@property(readonly, copy, nonatomic) NSString *friendsSyncType;
@property(readonly, copy, nonatomic) NSArray *partialFriends;
@end

