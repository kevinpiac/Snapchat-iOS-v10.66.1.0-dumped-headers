//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUCaptionStyle, SOJUGalleryDynamicCaptionStyle, SOJUGalleryPoint;

@interface SOJUGalleryCaptionBuilder : NSObject
{
    NSString *_type;
    NSString *_text;
    NSArray *_textAttributes;
    NSArray *_styleAttributes;
    NSNumber *_fontSize;
    NSNumber *_editingFontSize;
    SOJUGalleryPoint *_position;
    NSNumber *_rotation;
    NSNumber *_isTracking;
    NSArray *_trackingTrajectory;
    NSString *_typeface;
    SOJUCaptionStyle *_captionStyle;
    NSNumber *_pickedColor;
    NSArray *_userTags;
    SOJUGalleryDynamicCaptionStyle *_dynamicCaptionStyle;
    NSNumber *_isPositionCenterOfCaption;
    NSNumber *_isTranslateCenterOfCaption;
}

+ (id)withJUGalleryCaption:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCaptionStyle:(id)arg1;
- (id)setDynamicCaptionStyle:(id)arg1;
- (id)setEditingFontSize:(id)arg1;
- (id)setEditingFontSizeValue:(double)arg1;
- (id)setFontSize:(id)arg1;
- (id)setFontSizeValue:(double)arg1;
- (id)setIsPositionCenterOfCaption:(id)arg1;
- (id)setIsPositionCenterOfCaptionValue:(_Bool)arg1;
- (id)setIsTracking:(id)arg1;
- (id)setIsTrackingValue:(_Bool)arg1;
- (id)setIsTranslateCenterOfCaption:(id)arg1;
- (id)setIsTranslateCenterOfCaptionValue:(_Bool)arg1;
- (id)setPickedColor:(id)arg1;
- (id)setPickedColorValue:(int)arg1;
- (id)setPosition:(id)arg1;
- (id)setRotation:(id)arg1;
- (id)setRotationValue:(double)arg1;
- (id)setStyleAttributes:(id)arg1;
- (id)setText:(id)arg1;
- (id)setTextAttributes:(id)arg1;
- (id)setTrackingTrajectory:(id)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setTypeface:(id)arg1;
- (id)setUserTags:(id)arg1;

@end

