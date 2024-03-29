//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMessagingLegacyGroupConversationInfo, SCNMessagingLegacyOneOnOneConversationInfo;

@interface SCNMessagingLegacyConversationInfo : NSObject
{
    _Bool _requiresConversationSyncToDisplay;
    _Bool _arroyoEnabled;
    SCNMessagingLegacyOneOnOneConversationInfo *_oneOnOneConversationInfo;
    SCNMessagingLegacyGroupConversationInfo *_groupConversationInfo;
}

+ (id)LegacyConversationInfoWithRequiresConversationSyncToDisplay:(_Bool)arg1 arroyoEnabled:(_Bool)arg2 oneOnOneConversationInfo:(id)arg3 groupConversationInfo:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool arroyoEnabled; // @synthesize arroyoEnabled=_arroyoEnabled;
- (id)description;
@property(readonly, nonatomic) SCNMessagingLegacyGroupConversationInfo *groupConversationInfo; // @synthesize groupConversationInfo=_groupConversationInfo;
- (id)initWithRequiresConversationSyncToDisplay:(_Bool)arg1 arroyoEnabled:(_Bool)arg2 oneOnOneConversationInfo:(id)arg3 groupConversationInfo:(id)arg4;
@property(readonly, nonatomic) SCNMessagingLegacyOneOnOneConversationInfo *oneOnOneConversationInfo; // @synthesize oneOnOneConversationInfo=_oneOnOneConversationInfo;
@property(readonly, nonatomic) _Bool requiresConversationSyncToDisplay; // @synthesize requiresConversationSyncToDisplay=_requiresConversationSyncToDisplay;

@end

