//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaPageableViewController-Protocol.h"
#import "SCOperaVideoViewControllingDataSource-Protocol.h"

@class NSString;
@protocol SCOperaPageableViewControllerDelegate, SCOperaRemoteVideoControllerDelegate;

@interface SCOperaRemoteVideoViewProvider : UIViewController <SCOperaPageableViewController, SCOperaLayerViewControllerMediaContainer, SCOperaVideoViewControllingDataSource>
{
    NSString *_videoID;
    id <SCOperaRemoteVideoControllerDelegate> _delegate;
}

+ (id)remoteVideoViewControllerWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 isInline:(_Bool)arg3;
- (void).cxx_destruct;
- (_Bool)canHandleRoundCorner;
- (void)cancelViewWillFullyAppearAtTime;
- (CDStruct_1b6d18a9)currentTime;
@property(nonatomic) __weak id <SCOperaRemoteVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSetFullscreen:(_Bool)arg1;
- (void)didUpdateBottomPageViewProperties:(id)arg1;
- (CDStruct_1b6d18a9)duration;
- (id)imageSnapshot;
- (_Bool)isOverlay;
- (_Bool)isPaused;
- (_Bool)isPausedForAttachment;
- (_Bool)isShowingVideoFrame;
- (void)loadVideo;
- (double)mediaHeightToWidthAspectRatio;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (struct CGRect)mediaViewFrame;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
@property(nonatomic) __weak id <SCOperaPageableViewControllerDelegate> pageableViewControllerDelegate;
- (void)pause;
- (void)playVideo:(_Bool)arg1;
- (void)resume;
- (void)rotateVideoBasedOnOrientation;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)setResumeVideoPosition:(double)arg1;
- (void)setSubtitlesEnabled:(_Bool)arg1;
- (void)setVolume:(double)arg1;
- (id)snapshotFromPlayer;
- (void)start;
- (void)stop;
- (void)teardown;
- (double)totalVideoDurationSeconds;
- (void)updateWithScreenshot:(id)arg1;
- (void)updateWithVideoId:(id)arg1 eventContext:(id)arg2 firstFrameImageKey:(id)arg3 primaryColor:(id)arg4 videoRotationEnabled:(_Bool)arg5 showActionMenuButtonEnabled:(_Bool)arg6 imageProvider:(id)arg7;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (id)videoParameters;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewWillFullyAppear;
- (void)viewWillFullyAppearAtTime:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

