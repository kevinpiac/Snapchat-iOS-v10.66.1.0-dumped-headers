//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUIdentitySuggestedFriendCellInformation <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *cellIndex;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, copy, nonatomic) NSString *suggestionToken;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@end
