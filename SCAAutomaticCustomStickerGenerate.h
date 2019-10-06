//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAAutomaticCustomStickerGenerate : SCAUserTrackedEvent
{
    NSNumber *totalScannedImageFromCameraCount;
    NSNumber *totalScannedImageFromMemoriesCount;
    NSNumber *newAutoCustomStickerFromCameraCount;
    NSNumber *newAutoCustomStickerFromMemoriesCount;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNewAutoCustomStickerFromCameraCount;
- (long long)getNewAutoCustomStickerFromMemoriesCount;
- (double)getPerUserSamplingRate;
- (long long)getTotalScannedImageFromCameraCount;
- (long long)getTotalScannedImageFromMemoriesCount;
- (void)setNewAutoCustomStickerFromCameraCount:(long long)arg1;
- (void)setNewAutoCustomStickerFromMemoriesCount:(long long)arg1;
- (void)setTotalScannedImageFromCameraCount:(long long)arg1;
- (void)setTotalScannedImageFromMemoriesCount:(long long)arg1;

@end
