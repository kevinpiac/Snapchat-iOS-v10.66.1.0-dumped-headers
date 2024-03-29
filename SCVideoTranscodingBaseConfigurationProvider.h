//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCVideoTranscodingConfigurationProviderInput, VideoTranscodingConfiguration;

@interface SCVideoTranscodingBaseConfigurationProvider : NSObject
{
    SCVideoTranscodingConfigurationProviderInput *_input;
    VideoTranscodingConfiguration *_adaptiveConfiguration;
}

- (void).cxx_destruct;
- (_Bool)_deviceMeetsMinimumRequirementsForHighQualityVideo;
- (struct CGSize)_videoTranscodingTargetSizeForSendSnapVideo;
- (double)audioBitrateForSaving;
- (double)audioBitrateForSending;
- (double)bitrateForSaving;
- (double)bitrateForSending;
- (id)initWithConfigurationProviderInput:(id)arg1 mediaQualityLevel:(long long)arg2;
- (_Bool)isQualityScoreCalculationEnabled;
- (_Bool)isStreamingEnabledForSaving;
- (_Bool)isStreamingEnabledForSending;
- (unsigned long long)keyFrameIntervalForSaving;
- (unsigned long long)keyFrameIntervalForSending;
- (unsigned long long)maxFrameRate;
- (_Bool)shouldMuteAudio;
- (struct CGSize)targetSizeForSaving;
- (struct CGSize)targetSizeForSending;
- (unsigned long long)transcodingCodecType;

@end

