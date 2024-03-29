//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCABatchCaptureCreationEvent : SCAUserTrackedEvent
{
    NSNumber *imageCreationCount;
    NSNumber *videoCreationCount;
    NSNumber *avgImageCreationLatencyMs;
    NSNumber *avgVideoCreationLatencyMs;
    NSNumber *previewOpenLatencyMs;
    NSNumber *isFirstSnapImage;
    NSString *snapSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAvgImageCreationLatencyMs;
- (long long)getAvgVideoCreationLatencyMs;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getImageCreationCount;
- (_Bool)getIsFirstSnapImage;
- (double)getPerUserSamplingRate;
- (long long)getPreviewOpenLatencyMs;
- (id)getSnapSessionId;
- (long long)getVideoCreationCount;
- (void)setAvgImageCreationLatencyMs:(long long)arg1;
- (void)setAvgVideoCreationLatencyMs:(long long)arg1;
- (void)setImageCreationCount:(long long)arg1;
- (void)setIsFirstSnapImage:(_Bool)arg1;
- (void)setPreviewOpenLatencyMs:(long long)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setVideoCreationCount:(long long)arg1;

@end

