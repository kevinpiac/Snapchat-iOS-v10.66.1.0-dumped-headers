//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SOJUGalleryCroppingBuilder : NSObject
{
    NSNumber *_translationX;
    NSNumber *_translationY;
    NSNumber *_rotation;
    NSNumber *_scale;
}

+ (id)withJUGalleryCropping:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setRotation:(id)arg1;
- (id)setRotationValue:(double)arg1;
- (id)setScale:(id)arg1;
- (id)setScaleValue:(double)arg1;
- (id)setTranslationX:(id)arg1;
- (id)setTranslationXValue:(double)arg1;
- (id)setTranslationY:(id)arg1;
- (id)setTranslationYValue:(double)arg1;

@end
