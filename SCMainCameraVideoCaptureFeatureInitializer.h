//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCUserSession;
@protocol SCCameraVideoCaptureLogger, SCCapturer, SCFeatureBatchCapture, SCFeatureHandsFree, SCFeatureMultiSnap;

@interface SCMainCameraVideoCaptureFeatureInitializer : SCFeatureInitializer
{
    id <SCCapturer> _capturer;
    SCUserSession *_userSession;
    long long _cameraViewType;
    id <SCFeatureHandsFree> _handsFree;
    id <SCFeatureMultiSnap> _multiSnap;
    id <SCFeatureBatchCapture> _batchCapture;
    id <SCCameraVideoCaptureLogger> _videoCaptureLogger;
}

- (void).cxx_destruct;
- (id)createInstance;
- (id)initWithCapturer:(id)arg1 userSession:(id)arg2 cameraViewType:(long long)arg3 handsFree:(id)arg4 multiSnap:(id)arg5 batchCapture:(id)arg6 videoCaptureLogger:(id)arg7;

@end

