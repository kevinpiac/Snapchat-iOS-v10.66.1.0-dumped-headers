//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SCChatMessageAnimationData, SCChatMessageMetadata, SCChatMessageParticipantIdentifier;
@protocol SCChatGroup, SCChatRenderingConversation;

@interface SCChatUIParameterProvider : NSObject
{
    _Bool _isFailedAtLeastOnce;
    NSArray *_messages;
    id <SCChatRenderingConversation> _conversation;
    SCChatMessageMetadata *_metadata;
    id <SCChatGroup> _group;
    SCChatMessageParticipantIdentifier *_currentUser;
    NSString *_currentUserId;
    SCChatMessageAnimationData *_animationData;
    double _payloadWidth;
    double _payloadContentWidth;
    NSDictionary *_snapchattersData;
    struct NSDictionary *_parcelMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCChatMessageAnimationData *animationData; // @synthesize animationData=_animationData;
@property(readonly, nonatomic) id <SCChatRenderingConversation> conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) SCChatMessageParticipantIdentifier *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(readonly, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
- (id)initWithMessages:(id)arg1 conversation:(id)arg2 metadata:(id)arg3 group:(id)arg4 currentUser:(id)arg5 currentUserId:(id)arg6 animationData:(id)arg7 payloadWidth:(double)arg8 payloadContentWidth:(double)arg9 isFailedAtLeastOnce:(_Bool)arg10 snapchattersData:(id)arg11 parcelMap:(struct NSDictionary *)arg12;
@property(readonly, nonatomic) _Bool isFailedAtLeastOnce; // @synthesize isFailedAtLeastOnce=_isFailedAtLeastOnce;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(readonly, nonatomic) SCChatMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *parcelMap; // @synthesize parcelMap=_parcelMap;
@property(readonly, nonatomic) double payloadContentWidth; // @synthesize payloadContentWidth=_payloadContentWidth;
@property(readonly, nonatomic) double payloadWidth; // @synthesize payloadWidth=_payloadWidth;
@property(readonly, nonatomic) NSDictionary *snapchattersData; // @synthesize snapchattersData=_snapchattersData;

@end
