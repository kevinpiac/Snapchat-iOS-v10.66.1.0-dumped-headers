//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTCallingController-Protocol.h"
#import "SCTV3HeadlessSession-Protocol.h"
#import "SCTV3SessionWrapperListener-Protocol.h"

@class NSString, SCTV3SessionWrapper;
@protocol SCTV3HeadlessCallServices;

@interface SCTV3HeadlessSession : NSObject <SCTV3SessionWrapperListener, SCTCallingController, SCTV3HeadlessSession>
{
    NSString *_convoId;
    id <SCTV3HeadlessCallServices> _headlessCallServices;
    SCTV3SessionWrapper *_sessionWrapper;
}

- (void).cxx_destruct;
- (void)applyPayload:(id)arg1 senderUsername:(id)arg2;
- (id)callingController;
- (void)dealloc;
- (void)dismissCall;
- (void)dispose;
- (id)getPublishersForNotification:(id)arg1;
- (id)initWithConvoId:(id)arg1 headlessCallServices:(id)arg2 sessionWrapper:(id)arg3;
- (_Bool)isFullscreen;
- (void)muteLocalUserMedia:(unsigned long long)arg1;
- (unsigned long long)processNotification:(id)arg1 senderUsername:(id)arg2;
- (long long)processRingingTimeout:(id)arg1;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;
- (_Bool)startCall:(unsigned long long)arg1;
- (void)unmuteRemoteAudioIfNeeded;
- (void)updatePublishedMedia:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

