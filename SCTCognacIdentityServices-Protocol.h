//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SCTAuth, SCTalkParticipant;

@protocol SCTCognacIdentityServices <NSObject>
- (id <SCTAuth>)cognacAuthForConvoId:(NSString *)arg1 cognacId:(NSString *)arg2;
- (id <SCTalkParticipant>)localParticipantForConvoId:(NSString *)arg1;
- (void)refreshCognacAuthForConvoId:(NSString *)arg1 cognacId:(NSString *)arg2 completion:(void (^)(void))arg3;
- (NSArray *)remoteParticipantsForConvoId:(NSString *)arg1;
@end

