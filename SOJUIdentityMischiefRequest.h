//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityMischiefRequest-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUIdentityMischiefRequest : NSObject <SOJUIdentityMischiefRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_mischiefId;
    NSString *_mischiefAction;
    NSString *_mischiefName;
    NSArray *_participantsToAdd;
    NSNumber *_turnNotificationOn;
    NSDictionary *_latestSequenceNumbers;
    NSDictionary *_earliestSequenceNumbers;
    NSString *_paginationType;
    NSDictionary *_sojuNewBlockedParticipantExceptions;
    NSNumber *_muteMischiefStory;
    NSNumber *_muteCognacNotification;
    NSString *_groupInviteId;
    NSString *_groupInviteType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *earliestSequenceNumbers; // @synthesize earliestSequenceNumbers=_earliestSequenceNumbers;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *groupInviteId; // @synthesize groupInviteId=_groupInviteId;
@property(readonly, copy, nonatomic) NSString *groupInviteType; // @synthesize groupInviteType=_groupInviteType;
- (long long)groupInviteTypeEnum;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 mischiefId:(id)arg4 mischiefAction:(id)arg5 mischiefName:(id)arg6 participantsToAdd:(id)arg7 turnNotificationOn:(id)arg8 latestSequenceNumbers:(id)arg9 earliestSequenceNumbers:(id)arg10 paginationType:(id)arg11 sojuNewBlockedParticipantExceptions:(id)arg12 muteMischiefStory:(id)arg13 muteCognacNotification:(id)arg14 groupInviteId:(id)arg15 groupInviteType:(id)arg16;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *latestSequenceNumbers; // @synthesize latestSequenceNumbers=_latestSequenceNumbers;
@property(readonly, copy, nonatomic) NSString *mischiefAction; // @synthesize mischiefAction=_mischiefAction;
- (long long)mischiefActionEnum;
@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(readonly, copy, nonatomic) NSString *mischiefName; // @synthesize mischiefName=_mischiefName;
@property(readonly, copy, nonatomic) NSNumber *muteCognacNotification; // @synthesize muteCognacNotification=_muteCognacNotification;
- (_Bool)muteCognacNotificationValue;
@property(readonly, copy, nonatomic) NSNumber *muteMischiefStory; // @synthesize muteMischiefStory=_muteMischiefStory;
- (_Bool)muteMischiefStoryValue;
@property(readonly, copy, nonatomic) NSString *paginationType; // @synthesize paginationType=_paginationType;
- (long long)paginationTypeEnum;
@property(readonly, copy, nonatomic) NSArray *participantsToAdd; // @synthesize participantsToAdd=_participantsToAdd;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSDictionary *sojuNewBlockedParticipantExceptions; // @synthesize sojuNewBlockedParticipantExceptions=_sojuNewBlockedParticipantExceptions;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *turnNotificationOn; // @synthesize turnNotificationOn=_turnNotificationOn;
- (_Bool)turnNotificationOnValue;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

