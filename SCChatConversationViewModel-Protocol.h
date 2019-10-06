//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSString, SCChatDraft, SCChatViewHeaderViewModel, UIColor;
@protocol NSObject, SCChatGroup, SCChatMessageViewModel;

@protocol SCChatConversationViewModel <NSObject>
@property(readonly, nonatomic) double belowTheFoldOffset;
- (_Bool)canLoadMoreMessagesByRetrying:(_Bool)arg1;
@property(readonly, nonatomic) SCChatDraft *chatDraft;
@property(readonly, nonatomic) SCChatViewHeaderViewModel *chatViewHeaderViewModel;
- (NSString *)conversationId;
@property(readonly, nonatomic) UIColor *cursorColor;
@property(readonly, nonatomic) NSString *displayName;
@property(nonatomic) _Bool doNotDisturb;
@property(nonatomic) _Bool doNotDisturbMentions;
@property(readonly, nonatomic) NSIndexPath *firstBelowTheFoldIndexPath;
@property(readonly, nonatomic) id <SCChatGroup> group;
- (NSIndexPath *)indexPathForIdentifier:(id <NSObject>)arg1;
@property(readonly, nonatomic) _Bool isArroyoConversation;
@property(readonly, nonatomic) _Bool isGroupConversation;
@property(readonly, nonatomic) _Bool isInitialLoad;
- (NSIndexPath *)lastIndexPath;
@property(readonly, nonatomic) unsigned long long messageRetentionInMinutes;
@property(readonly, nonatomic) NSArray *messageViewModels;
@property(readonly, nonatomic) long long migrationState;
@property(readonly, nonatomic) double previewModeOffset;
- (NSString *)recipientUsername;
@property(readonly, nonatomic) NSDictionary *stickerUsageHistory;
@property(readonly, nonatomic) double tableHeight;
- (id <SCChatMessageViewModel>)viewModelAtIndexPath:(NSIndexPath *)arg1;
@end

