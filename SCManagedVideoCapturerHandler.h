//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedVideoCapturerDelegate-Protocol.h"

@class NSString, SCCaptureResource;

@interface SCManagedVideoCapturerHandler : NSObject <SCManagedVideoCapturerDelegate>
{
    SCCaptureResource *_captureResource;
}

- (void).cxx_destruct;
- (void)_videoRecordingCleanup;
- (id)initWithCaptureResource:(id)arg1;
- (void)managedVideoCapturer:(id)arg1 didAppendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 presentationTimestamp:(CDStruct_1b6d18a9)arg3;
- (void)managedVideoCapturer:(id)arg1 didBeginAudioRecording:(CDStruct_4565c1ff)arg2;
- (void)managedVideoCapturer:(id)arg1 didBeginVideoRecording:(CDStruct_4565c1ff)arg2;
- (void)managedVideoCapturer:(id)arg1 didCancelVideoRecording:(CDStruct_4565c1ff)arg2;
- (void)managedVideoCapturer:(id)arg1 didFailWithError:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedVideoCapturer:(id)arg1 didGetError:(id)arg2 forType:(long long)arg3 session:(CDStruct_4565c1ff)arg4;
- (void)managedVideoCapturer:(id)arg1 didSucceedWithRecordedVideo:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedVideoCapturer:(id)arg1 willStopWithRecordedVideoFuture:(id)arg2 videoSize:(struct CGSize)arg3 placeholderImage:(id)arg4 session:(CDStruct_4565c1ff)arg5;
- (id)managedVideoCapturerGetExtraFrameHealthInfo:(id)arg1;
- (void)managedVideoCapturerWillBeginVideoRecording:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

