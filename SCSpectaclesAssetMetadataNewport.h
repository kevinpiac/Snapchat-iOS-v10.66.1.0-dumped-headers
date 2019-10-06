//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSpectaclesAssetMetadata.h"

@class SCSpectaclesCalibration;

@interface SCSpectaclesAssetMetadataNewport : SCSpectaclesAssetMetadata
{
    SCSpectaclesCalibration *_calibration;
    unsigned long long _primaryCamera;
}

- (void).cxx_destruct;
- (void)addImageMetadata:(struct CGImageMetadata *)arg1;
- (id)avMetadataItems;
@property(readonly, nonatomic) SCSpectaclesCalibration *calibration; // @synthesize calibration=_calibration;
- (id)initWithAvMetadataItems:(id)arg1 serialNumber:(id)arg2;
- (id)initWithImageMetadata:(struct CGImageMetadata *)arg1 serialNumber:(id)arg2;
- (id)initWithMediaId:(id)arg1 metadata:(id)arg2 imuData:(id)arg3 calibration:(id)arg4 primaryCamera:(unsigned long long)arg5;
- (_Bool)isCorrupt;
@property(readonly, nonatomic) unsigned long long primaryCamera; // @synthesize primaryCamera=_primaryCamera;

@end
