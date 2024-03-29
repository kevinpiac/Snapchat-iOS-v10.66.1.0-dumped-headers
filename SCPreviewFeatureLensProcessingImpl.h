//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureLensProcessing-Protocol.h"
#import "SCPreviewLensControllerDelegate-Protocol.h"

@class SCPreviewConfiguration, SCPreviewLensController, SCPreviewLensReadyLogger, SCSnapCommonLoggingParameters, SCUserSession, UIView;
@protocol SCFeatureVideoPlayback, SCLensBitmojiProviderFactory, SCLensLogger, SCLensRemoteAssetsProviderFactory, UIGestureRecognizerDelegate;

@interface SCPreviewFeatureLensProcessingImpl : SCFeature <SCPreviewLensControllerDelegate, SCPreviewFeatureLensProcessing>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    id <SCFeatureVideoPlayback> _videoPlayback;
    UIView *_contentView;
    id <SCLensBitmojiProviderFactory> _bitmojiProviderFactory;
    id <SCLensRemoteAssetsProviderFactory> _remoteAssetsProviderFactory;
    SCPreviewLensController *_previewLensController;
    id <SCLensLogger> _lensLogger;
    SCPreviewLensReadyLogger *_previewLensReadyLogger;
    id <UIGestureRecognizerDelegate> _gestureRecognizerDelegate;
}

- (void).cxx_destruct;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizerDelegate; // @synthesize gestureRecognizerDelegate=_gestureRecognizerDelegate;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2 commonLoggingParameters:(id)arg3 videoPlayback:(id)arg4 bitmojiProviderFactory:(id)arg5 remoteAssetsProviderFactory:(id)arg6 lensLogger:(id)arg7;
- (_Bool)isAnyLensTouchProcessingGestureRecognizer:(id)arg1;
- (_Bool)isLensActive;
- (_Bool)lensHitAreaContainGesture:(id)arg1;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)setLens:(id)arg1 withCommand:(id)arg2;

@end

