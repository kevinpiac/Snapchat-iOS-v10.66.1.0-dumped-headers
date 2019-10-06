//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"

@class AVAudioRecorder, NSData, NSString, NSTimer, NSURL, SCAudioConfigurationToken, SCChatAudioNotePreview;
@protocol SCChatAudioNoteRecorderDelegate, SCPerforming;

@interface SCChatAudioNoteRecorder : NSObject <AVAudioRecorderDelegate>
{
    id <SCPerforming> _audioNoteRecordingPerformer;
    SCAudioConfigurationToken *_audioConfiguration;
    NSURL *_recordedAudioFileURL;
    long long _audioNoteSampleNum;
    NSData *_audioNoteMediaData;
    double _durationInSec;
    double _maxAmplitude;
    double _captureSampleValue[8];
    id <SCChatAudioNoteRecorderDelegate> _delegate;
    SCChatAudioNotePreview *_audioPreview;
    unsigned long long _state;
    AVAudioRecorder *_recorder;
    NSTimer *_recorderTimer;
}

- (void).cxx_destruct;
- (id)_nextTempFileUrlWithExtension:(id)arg1;
- (void)_releaseAudioSessionTokenIfNeeded;
- (void)_removeTempFile;
- (id)audioNoteRecorderSettings;
- (id)audioNoteRecordingPerformer;
@property(retain, nonatomic) SCChatAudioNotePreview *audioPreview; // @synthesize audioPreview=_audioPreview;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
@property(nonatomic) __weak id <SCChatAudioNoteRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)prepareNextRecordingWithCallback:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) NSTimer *recorderTimer; // @synthesize recorderTimer=_recorderTimer;
- (void)recorderTimerFired:(id)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)showRecordingFailureStatusBar;
- (void)startAudioNoteRecorderTimer;
- (void)startAudioNoteRecordingAsynchronously;
- (void)stopAudioNoteRecorderTimer;
- (void)stopAudioNoteRecordingAsynchronously;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

