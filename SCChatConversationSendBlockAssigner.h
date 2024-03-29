//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol SCChatSendBlockAssignerDelegate, SCPerforming;

@interface SCChatConversationSendBlockAssigner : NSObject
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_sendingBlockIds;
    NSMutableSet *_failedAtleastOnceMessages;
    long long _currentHighestBlockId;
    id <SCChatSendBlockAssignerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_generateBlockIdForMessage:(id)arg1;
- (void)_updateBlockIdForMessage:(id)arg1 previousMessage:(id)arg2;
@property(nonatomic) __weak id <SCChatSendBlockAssignerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchSendBlockInfoWithCompletion:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (id)initWithMessageIdsToBlockIds:(struct NSDictionary *)arg1 performer:(id)arg2;
- (id)initWithPerformer:(id)arg1;
- (void)updateBlockIdForMessages:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;

@end

