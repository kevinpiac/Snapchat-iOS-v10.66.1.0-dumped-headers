//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol SCManagedCapturerState <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool adjustingExposure;
@property(readonly, nonatomic) _Bool adjustingFocus;
@property(readonly, nonatomic) _Bool arSessionActive;
@property(readonly, nonatomic) _Bool batchCaptureActive;
@property(readonly, nonatomic) unsigned long long devicePosition;
@property(readonly, nonatomic) _Bool flashActive;
@property(readonly, nonatomic) _Bool flashSupported;
@property(readonly, nonatomic) _Bool isDepthCaptureModeActive;
@property(readonly, nonatomic) _Bool isNightModeActive;
@property(readonly, nonatomic) _Bool isPortraitModeActive;
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly, nonatomic) _Bool isStabilizationModeActive;
@property(readonly, nonatomic) _Bool lensProcessorReady;
@property(readonly, nonatomic) _Bool lensesActive;
@property(readonly, nonatomic) _Bool liveVideoStreaming;
@property(readonly, nonatomic) _Bool lowLightCondition;
@property(readonly, nonatomic) _Bool torchActive;
@property(readonly, nonatomic) _Bool torchSupported;
@property(readonly, nonatomic) double zoomFactor;
@end

