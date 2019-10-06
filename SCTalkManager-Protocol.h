//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol SCTCognacServices, SCTCognacSession, SCTV3ActiveConversationsListener, SCTV3CallStateListener, SCTV3HeadlessCallServices, SCTV3HeadlessSession, SCTalkSession, SCTalkSessionDependenciesProvider;

@protocol SCTalkManager <NSObject>
- (NSDictionary *)activeConversations;
- (void)addActiveConversationsListener:(id <SCTV3ActiveConversationsListener>)arg1;
- (void)addCallStateListener:(id <SCTV3CallStateListener>)arg1 convoId:(NSString *)arg2;
- (unsigned long long)callStateForConvoId:(NSString *)arg1;
- (id <SCTCognacSession>)createCognacSessionForConvoId:(NSString *)arg1 cognacId:(NSString *)arg2 cognacServices:(id <SCTCognacServices>)arg3 bitmojiEnabled:(_Bool)arg4;
- (id <SCTV3HeadlessSession>)createHeadlessSessionForConvoId:(NSString *)arg1 headessCallServices:(id <SCTV3HeadlessCallServices>)arg2;
- (id <SCTalkSession>)createSessionForConvoId:(NSString *)arg1 dependencies:(id <SCTalkSessionDependenciesProvider>)arg2;
- (void)dismissCallsOtherThanConvoId:(NSString *)arg1;
- (_Bool)hasAnyCallingActivity;
- (void)removeActiveConversationsListener:(id <SCTV3ActiveConversationsListener>)arg1;
- (void)removeCallStateListener:(id <SCTV3CallStateListener>)arg1 convoId:(NSString *)arg2;
@end

