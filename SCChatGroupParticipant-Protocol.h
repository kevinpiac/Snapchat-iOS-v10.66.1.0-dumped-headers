//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBitmojiUser-Protocol.h"
#import "SCCognacGroupParticipant-Protocol.h"

@class NSNumber, NSString, UIColor;

@protocol SCChatGroupParticipant <SCBitmojiUser, SCCognacGroupParticipant>
@property(readonly, copy, nonatomic) UIColor *color;
@property(readonly, copy, nonatomic) NSNumber *joinTimestamp;
@property(readonly, nonatomic) unsigned long long mischiefVersion;
- (NSString *)nameToDisplay;
@property(readonly, copy, nonatomic) NSNumber *talkSessionUserId;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@end
