//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSAPortraitEffectsMatteWrapper;

@interface LSAPortraitEffectsMatteCache : NSObject
{
    LSAPortraitEffectsMatteWrapper *_matte;
    shared_ptr_6112f96f _cachedMaskImage;
    struct RectTransform _cachedMaskImageTransform;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_6112f96f)_buildImageDataWithTransform:(struct RectTransform)arg1;
- (shared_ptr_6112f96f)buildImageDataWithTransform:(struct RectTransform)arg1;
- (_Bool)fillSegmentationTrackingData:(struct TrackerData *)arg1 withTransform:(struct RectTransform)arg2;
- (id)getPortraitSegmentationMaskWithTransform:(struct RectTransform)arg1;
- (void)updateWithPortraitEffectsMatte:(id)arg1;

@end
