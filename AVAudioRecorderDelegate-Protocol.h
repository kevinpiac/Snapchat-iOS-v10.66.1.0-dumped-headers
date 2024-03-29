//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioRecorder, NSError;

@protocol AVAudioRecorderDelegate <NSObject>

@optional
- (void)audioRecorderBeginInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderDidFinishRecording:(AVAudioRecorder *)arg1 successfully:(_Bool)arg2;
- (void)audioRecorderEncodeErrorDidOccur:(AVAudioRecorder *)arg1 error:(NSError *)arg2;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withFlags:(unsigned long long)arg2;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withOptions:(unsigned long long)arg2;
@end

