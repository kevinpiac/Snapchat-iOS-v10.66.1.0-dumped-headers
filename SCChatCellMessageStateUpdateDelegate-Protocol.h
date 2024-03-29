//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMessageChatViewModel, UITableViewCell;
@protocol SCChatMessage;

@protocol SCChatCellMessageStateUpdateDelegate <NSObject>
- (void)didLongPressOnMessageViewModel:(SCMessageChatViewModel *)arg1 cell:(UITableViewCell *)arg2;
- (void)didReceiveBitmojiInChat:(id <SCChatMessage>)arg1 stickerId:(NSString *)arg2;
- (void)didRequestRetryFailedMessage:(id <SCChatMessage>)arg1;
- (void)didSelectPreserveMessageForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)didShowCompleteDisplayForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)didShowPendingDisplayForMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
@end

