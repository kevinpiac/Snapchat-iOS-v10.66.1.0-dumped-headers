//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SCChatRenderingMessage;

@protocol SCChatSendBlockAssignerDelegate
- (_Bool)canMergeBlockForMessage:(id <SCChatRenderingMessage>)arg1 withPreviousMessage:(id <SCChatRenderingMessage>)arg2;
- (_Bool)messageNeedsBlock:(id <SCChatRenderingMessage>)arg1;
@end

