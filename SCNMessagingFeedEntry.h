//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCNMessagingFeedEntryDisplayInfo, SCNMessagingLegacyConversationInfo, SCNMessagingUUID;

@interface SCNMessagingFeedEntry : NSObject
{
    SCNMessagingUUID *_conversationId;
    SCNMessagingLegacyConversationInfo *_legacyConversationInfo;
    long long _lastEventUpdateTimestamp;
    NSArray *_participants;
    NSString *_conversationTitle;
    long long _conversationType;
    SCNMessagingFeedEntryDisplayInfo *_displayInfo;
}

+ (id)FeedEntryWithConversationId:(id)arg1 legacyConversationInfo:(id)arg2 lastEventUpdateTimestamp:(long long)arg3 participants:(id)arg4 conversationTitle:(id)arg5 conversationType:(long long)arg6 displayInfo:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCNMessagingUUID *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, nonatomic) NSString *conversationTitle; // @synthesize conversationTitle=_conversationTitle;
@property(readonly, nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
- (id)description;
@property(readonly, nonatomic) SCNMessagingFeedEntryDisplayInfo *displayInfo; // @synthesize displayInfo=_displayInfo;
- (id)initWithConversationId:(id)arg1 legacyConversationInfo:(id)arg2 lastEventUpdateTimestamp:(long long)arg3 participants:(id)arg4 conversationTitle:(id)arg5 conversationType:(long long)arg6 displayInfo:(id)arg7;
@property(readonly, nonatomic) long long lastEventUpdateTimestamp; // @synthesize lastEventUpdateTimestamp=_lastEventUpdateTimestamp;
@property(readonly, nonatomic) SCNMessagingLegacyConversationInfo *legacyConversationInfo; // @synthesize legacyConversationInfo=_legacyConversationInfo;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;

@end

