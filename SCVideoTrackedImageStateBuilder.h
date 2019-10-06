//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SOJUGalleryTransform, UIImage;

@interface SCVideoTrackedImageStateBuilder : NSObject
{
    UIImage *_image;
    struct CGSize _normalizedSize;
    NSArray *_trajectory;
    SOJUGalleryTransform *_staticTransform;
}

+ (id)withVideoTrackedImageState:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setImage:(id)arg1;
- (id)setNormalizedSize:(struct CGSize)arg1;
- (id)setStaticTransform:(id)arg1;
- (id)setTrajectory:(id)arg1;

@end
