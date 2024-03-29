//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCLazy, SCSnapchatter;
@protocol SCChatMessageActionHandling, SCPerforming;

@interface SCReplyWithLensMessagingHelper : NSObject
{
    SCSnapchatter *_senderSnapchatter;
    SCSnapchatter *_recipientSnapchatter;
    id <SCPerforming> _performer;
    SCLazy *_usernameToSnapchatterFetching;
    id <SCChatMessageActionHandling> _chatMessageActionHandler;
    NSString *_senderUserName;
    NSString *_recipientUserName;
}

- (void).cxx_destruct;
- (void)_fetchSnapchatterForUserName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendStatusMessage;
- (void)fetchRecipientSnapchatterWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSenderUserName:(id)arg1 recipientUserName:(id)arg2 usernameToSnapchatterFetching:(id)arg3 chatMessageActionHandler:(id)arg4;
@property(retain, nonatomic) SCSnapchatter *recipientSnapchatter;
@property(readonly, nonatomic) NSString *recipientUserName; // @synthesize recipientUserName=_recipientUserName;
- (void)sendStatusMessage;
@property(retain, nonatomic) SCSnapchatter *senderSnapchatter;
@property(readonly, nonatomic) NSString *senderUserName; // @synthesize senderUserName=_senderUserName;

@end

