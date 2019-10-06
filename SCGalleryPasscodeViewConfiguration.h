//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGalleryPasscodeViewConfiguration : NSObject
{
    unsigned long long _passcodeLength;
    double _indicatorSize;
    double _indicatorSpacing;
    double _spacingBetweenIndicatorsAndKeys;
    double _keySize;
    double _keyHorizontalSpacing;
    double _keyVerticalSpacing;
}

+ (id)defaultConfiguration;
@property(nonatomic) double indicatorSize; // @synthesize indicatorSize=_indicatorSize;
@property(nonatomic) double indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(nonatomic) double keyHorizontalSpacing; // @synthesize keyHorizontalSpacing=_keyHorizontalSpacing;
@property(nonatomic) double keySize; // @synthesize keySize=_keySize;
@property(nonatomic) double keyVerticalSpacing; // @synthesize keyVerticalSpacing=_keyVerticalSpacing;
@property(nonatomic) unsigned long long passcodeLength; // @synthesize passcodeLength=_passcodeLength;
@property(nonatomic) double spacingBetweenIndicatorsAndKeys; // @synthesize spacingBetweenIndicatorsAndKeys=_spacingBetweenIndicatorsAndKeys;

@end

