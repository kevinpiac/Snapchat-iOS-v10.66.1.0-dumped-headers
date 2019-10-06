//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LCVImage, NSMutableArray;

@interface LCVCalibrationData : NSObject
{
    float _horizontalFovDegrees;
    float _verticalFovDegrees;
    LCVImage *_leftLut;
    LCVImage *_rightLut;
    NSMutableArray *_leftAlignmentComp;
    NSMutableArray *_rightAlignmentComp;
}

- (void).cxx_destruct;
@property(nonatomic) float horizontalFovDegrees; // @synthesize horizontalFovDegrees=_horizontalFovDegrees;
- (id)init;
@property(retain, nonatomic) NSMutableArray *leftAlignmentComp; // @synthesize leftAlignmentComp=_leftAlignmentComp;
@property(retain, nonatomic) LCVImage *leftLut; // @synthesize leftLut=_leftLut;
@property(retain, nonatomic) NSMutableArray *rightAlignmentComp; // @synthesize rightAlignmentComp=_rightAlignmentComp;
@property(retain, nonatomic) LCVImage *rightLut; // @synthesize rightLut=_rightLut;
@property(nonatomic) float verticalFovDegrees; // @synthesize verticalFovDegrees=_verticalFovDegrees;

@end

