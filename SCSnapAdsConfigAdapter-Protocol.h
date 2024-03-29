//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCSnapAdsConfigAdapter <NSObject>
- (NSString *)defaultProtoServeEndpoint;
- (NSString *)defaultShadowInitEndpoint;
- (NSString *)defaultSojuServeEndpoint;
- (NSString *)defaultStagingProtoServeEndpoint;
- (NSString *)defaultStagingProtoTrackEndpoint;
- (NSString *)defaultStagingSojuServeEndpoint;
- (NSString *)defaultStagingSojuTrackEndpoint;
- (_Bool)enableAdRenderDataStoryAds;
- (_Bool)enableAutoAdvanceStreaming;
- (_Bool)enableCIStream;
- (_Bool)enableCognacSkippableAd;
- (_Bool)enableCognacStreaming;
- (_Bool)enableDPAProcessing;
- (_Bool)enableMockAdServer;
- (_Bool)enablePetraProcessing;
- (_Bool)enableProtoAdRequestLiveStories;
- (_Bool)enableProtoAdRequestPublisher;
- (_Bool)enableProtoAdRequestShow;
- (_Bool)enableProtoAdTrackLiveStories;
- (_Bool)enableProtoAdTrackPublisher;
- (_Bool)enableProtoAdTrackShow;
- (_Bool)forceAppInstallLowestRendition;
- (_Bool)forcePoliticalAd;
- (_Bool)includeRequestDebugWaterfall;
- (long long)initRequestThrottleInMins;
- (_Bool)isDisabledForProductType:(unsigned long long)arg1;
- (long long)mockAdServerAdRequestStatusCode;
- (long long)mockAdServerDebugAdType;
- (_Bool)overwriteEnableTopSnapStreaming;
- (long long)pixelTokenTTLInSec;
- (_Bool)requestAdRenderData;
- (_Bool)shouldOverwriteTopSnapStreaming;
- (_Bool)shouldUseShadowInit;
- (_Bool)shouldUseStagingHost;
@end

