//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCChatMessage;

@protocol SCChatLoggerV2 <NSObject>
- (void)logChatLoadFromDiskEnd;
- (void)logChatLoadFromDiskStart;
- (void)logFetchConversationLatencyEndWithConversationId:(NSString *)arg1 success:(_Bool)arg2;
- (void)logFetchConversationLatencyStartWithConversationId:(NSString *)arg1;
- (void)logFetchDeltaInfoAvailableForNumCallbacks:(unsigned long long)arg1;
- (void)logFetchDeltaInfoUnavailableForNumCallbacks:(unsigned long long)arg1;
- (void)logSentMessage:(id <SCChatMessage>)arg1 success:(_Bool)arg2;
@end
