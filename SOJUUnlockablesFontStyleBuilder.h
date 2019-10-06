//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUUnlockablesTextColor, SOJUUnlockablesTextPadding;

@interface SOJUUnlockablesFontStyleBuilder : NSObject
{
    NSString *_fontName;
    NSString *_fontUrl;
    SOJUUnlockablesTextColor *_fontColor;
    NSString *_backgroundImageUrl;
    NSNumber *_letterSpacing;
    NSNumber *_lineHeight;
    NSString *_textTransform;
    NSArray *_textShadow;
    NSString *_textDecoration;
    NSString *_textAlign;
    NSNumber *_fontSize;
    SOJUUnlockablesTextPadding *_padding;
    NSString *_backgroundRepeat;
    SOJUUnlockablesTextColor *_borderColor;
    NSNumber *_fontBorderWidth;
    NSNumber *_minFontSize;
    NSNumber *_maxFontSize;
}

+ (id)withJUUnlockablesFontStyle:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setBackgroundImageUrl:(id)arg1;
- (id)setBackgroundRepeat:(id)arg1;
- (id)setBackgroundRepeatEnum:(long long)arg1;
- (id)setBorderColor:(id)arg1;
- (id)setFontBorderWidth:(id)arg1;
- (id)setFontBorderWidthValue:(double)arg1;
- (id)setFontColor:(id)arg1;
- (id)setFontName:(id)arg1;
- (id)setFontSize:(id)arg1;
- (id)setFontSizeValue:(double)arg1;
- (id)setFontUrl:(id)arg1;
- (id)setLetterSpacing:(id)arg1;
- (id)setLetterSpacingValue:(double)arg1;
- (id)setLineHeight:(id)arg1;
- (id)setLineHeightValue:(double)arg1;
- (id)setMaxFontSize:(id)arg1;
- (id)setMaxFontSizeValue:(double)arg1;
- (id)setMinFontSize:(id)arg1;
- (id)setMinFontSizeValue:(double)arg1;
- (id)setPadding:(id)arg1;
- (id)setTextAlign:(id)arg1;
- (id)setTextAlignEnum:(long long)arg1;
- (id)setTextDecoration:(id)arg1;
- (id)setTextDecorationEnum:(long long)arg1;
- (id)setTextShadow:(id)arg1;
- (id)setTextTransform:(id)arg1;
- (id)setTextTransformEnum:(long long)arg1;

@end

