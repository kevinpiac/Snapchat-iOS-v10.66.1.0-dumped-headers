//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTCAudioSessionDelegate-Protocol.h"

@class NSString;

@interface RTCNativeAudioSessionDelegateAdapter : NSObject <RTCAudioSessionDelegate>
{
    struct AudioSessionObserver *_observer;
}

- (void)audioSession:(id)arg1 didChangeCanPlayOrRecord:(_Bool)arg2;
- (void)audioSession:(id)arg1 didChangeOutputVolume:(float)arg2;
- (void)audioSessionDidBeginInterruption:(id)arg1;
- (void)audioSessionDidChangeRoute:(id)arg1 reason:(unsigned long long)arg2 previousRoute:(id)arg3;
- (void)audioSessionDidEndInterruption:(id)arg1 shouldResumeSession:(_Bool)arg2;
- (void)audioSessionDidStartPlayOrRecord:(id)arg1;
- (void)audioSessionDidStopPlayOrRecord:(id)arg1;
- (void)audioSessionMediaServerReset:(id)arg1;
- (void)audioSessionMediaServerTerminated:(id)arg1;
- (id)initWithObserver:(struct AudioSessionObserver *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

