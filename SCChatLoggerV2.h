//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatLoggerV2-Protocol.h"

@class NSString;

@interface SCChatLoggerV2 : NSObject <SCChatLoggerV2>
{
}

+ (id)sharedInstance;
- (void)logChatLoadFromDiskEnd;
- (void)logChatLoadFromDiskStart;
- (void)logFetchConversationLatencyEndWithConversationId:(id)arg1 success:(_Bool)arg2;
- (void)logFetchConversationLatencyStartWithConversationId:(id)arg1;
- (void)logFetchDeltaInfoAvailableForNumCallbacks:(unsigned long long)arg1;
- (void)logFetchDeltaInfoUnavailableForNumCallbacks:(unsigned long long)arg1;
- (void)logSentMessage:(id)arg1 success:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
