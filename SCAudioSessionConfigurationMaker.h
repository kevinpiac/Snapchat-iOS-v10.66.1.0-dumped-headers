//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCAudioSessionV1;

@interface SCAudioSessionConfigurationMaker : NSObject
{
    SCAudioSessionV1 *_session;
    struct NSString *_token;
}

- (void).cxx_destruct;
- (id)initWithAudioSession:(id)arg1 token:(struct NSString *)arg2;
- (void)releaseAll;
- (void)releaseCallKit;
- (void)releaseCalling;
- (void)releasePlayback;
- (void)releaseProximityRouting;
- (void)releaseRecording;
- (void)requestCallKitWithSpeakers:(_Bool)arg1;
- (void)requestCalling;
- (void)requestListenToCalling;
- (void)requestPlayback;
- (void)requestProximityRouting;
- (void)requestRecording;

@end
