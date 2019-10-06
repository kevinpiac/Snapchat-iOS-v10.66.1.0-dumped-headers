//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCTV3CallStateListener <NSObject>
- (void)onCallEnded;
- (void)onCallWatched;
- (void)onIncomingCallCancelled;
- (void)onIncomingCallReceived;
- (void)onIncomingCallStarted;
- (void)onIncomingCallWatched;
- (void)onOutgoingCallCancelled;
- (void)onOutgoingCallMissed;
- (void)onOutgoingCallRejected;
- (void)onOutgoingCallRequested;
- (void)onOutgoingCallStarted;
- (void)onPublishedMediaOrMuteChanged:(NSString *)arg1 media:(unsigned long long)arg2 muted:(_Bool)arg3;
@end

