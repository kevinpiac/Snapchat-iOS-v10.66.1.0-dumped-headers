//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUAdDeviceDeviceInfo, SOJUAdSnapCreationInfo;

@interface SOJUAdFilterCarouselImpressionTrackBuilder : NSObject
{
    SOJUAdSnapCreationInfo *_snapCreationInfo;
    NSString *_snapSessionId;
    NSNumber *_carouselSize;
    NSArray *_filterImpressions;
    SOJUAdDeviceDeviceInfo *_deviceInfo;
}

+ (id)withJUAdFilterCarouselImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCarouselSize:(id)arg1;
- (id)setCarouselSizeValue:(long long)arg1;
- (id)setDeviceInfo:(id)arg1;
- (id)setFilterImpressions:(id)arg1;
- (id)setSnapCreationInfo:(id)arg1;
- (id)setSnapSessionId:(id)arg1;

@end

