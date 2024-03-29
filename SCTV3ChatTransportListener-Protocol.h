//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SCTChatMessage, SCTV3CallRequest;

@protocol SCTV3ChatTransportListener <NSObject>
- (void)onCallIncompatible:(NSString *)arg1 incompatibleRecipients:(NSArray *)arg2;
- (void)onCallRequestReceived:(id <SCTV3CallRequest>)arg1 senderUsername:(NSString *)arg2;
- (void)onChatMessageReceived:(id <SCTChatMessage>)arg1;
@end

