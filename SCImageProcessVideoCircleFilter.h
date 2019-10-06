//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

@interface SCImageProcessVideoCircleFilter : CIFilter
{
    CIImage *inputImage;
    CIVector *inputDestSize;
    NSNumber *inputRadius;
    CIColor *inputColor;
    NSNumber *inputMask;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;

@end

