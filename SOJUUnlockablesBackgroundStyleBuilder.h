//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SOJUUnlockablesTextColor, SOJUUnlockablesTextShadow;

@interface SOJUUnlockablesBackgroundStyleBuilder : NSObject
{
    SOJUUnlockablesTextColor *_color;
    SOJUUnlockablesTextShadow *_boxShadow;
    NSNumber *_borderRadius;
}

+ (id)withJUUnlockablesBackgroundStyle:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setBorderRadius:(id)arg1;
- (id)setBorderRadiusValue:(double)arg1;
- (id)setBoxShadow:(id)arg1;
- (id)setColor:(id)arg1;

@end

