//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCaptionStyle-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCaptionShadow;

@interface SOJUCaptionStyle : NSObject <SOJUCaptionStyle>
{
    NSString *_name;
    NSString *_fontName;
    NSArray *_styleProperty;
    NSString *_caps;
    NSNumber *_kerning;
    NSNumber *_leading;
    NSNumber *_borderWidth;
    SOJUCaptionShadow *_shadow;
    NSNumber *_backgroundColor;
    NSArray *_fontColor;
    NSString *_fontPatternImageUrl;
    NSString *_fontColorMode;
    NSNumber *_colorChangeable;
    NSNumber *_rotation;
    NSArray *_effect;
    NSString *_regularTypefaceUrl;
    NSString *_boldTypefaceUrl;
    NSString *_italicsTypefaceUrl;
    NSString *_italicsBoldTypefaceUrl;
    NSNumber *_backgroundCornerRadius;
    NSString *_fontFamilyName;
    NSString *_backgroundImageUrl;
    NSString *_displayName;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (int)backgroundColorValue;
@property(readonly, copy, nonatomic) NSNumber *backgroundCornerRadius; // @synthesize backgroundCornerRadius=_backgroundCornerRadius;
- (double)backgroundCornerRadiusValue;
@property(readonly, copy, nonatomic) NSString *backgroundImageUrl; // @synthesize backgroundImageUrl=_backgroundImageUrl;
@property(readonly, copy, nonatomic) NSString *boldTypefaceUrl; // @synthesize boldTypefaceUrl=_boldTypefaceUrl;
@property(readonly, copy, nonatomic) NSNumber *borderWidth; // @synthesize borderWidth=_borderWidth;
- (double)borderWidthValue;
@property(readonly, copy, nonatomic) NSString *caps; // @synthesize caps=_caps;
- (long long)capsEnum;
@property(readonly, copy, nonatomic) NSNumber *colorChangeable; // @synthesize colorChangeable=_colorChangeable;
- (_Bool)colorChangeableValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSArray *effect; // @synthesize effect=_effect;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *fontColor; // @synthesize fontColor=_fontColor;
@property(readonly, copy, nonatomic) NSString *fontColorMode; // @synthesize fontColorMode=_fontColorMode;
- (long long)fontColorModeEnum;
@property(readonly, copy, nonatomic) NSString *fontFamilyName; // @synthesize fontFamilyName=_fontFamilyName;
@property(readonly, copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, copy, nonatomic) NSString *fontPatternImageUrl; // @synthesize fontPatternImageUrl=_fontPatternImageUrl;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithName:(id)arg1 fontName:(id)arg2 styleProperty:(id)arg3 caps:(id)arg4 kerning:(id)arg5 leading:(id)arg6 borderWidth:(id)arg7 shadow:(id)arg8 backgroundColor:(id)arg9 fontColor:(id)arg10 fontPatternImageUrl:(id)arg11 fontColorMode:(id)arg12 colorChangeable:(id)arg13 rotation:(id)arg14 effect:(id)arg15 regularTypefaceUrl:(id)arg16 boldTypefaceUrl:(id)arg17 italicsTypefaceUrl:(id)arg18 italicsBoldTypefaceUrl:(id)arg19 backgroundCornerRadius:(id)arg20 fontFamilyName:(id)arg21 backgroundImageUrl:(id)arg22 displayName:(id)arg23;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *italicsBoldTypefaceUrl; // @synthesize italicsBoldTypefaceUrl=_italicsBoldTypefaceUrl;
@property(readonly, copy, nonatomic) NSString *italicsTypefaceUrl; // @synthesize italicsTypefaceUrl=_italicsTypefaceUrl;
@property(readonly, copy, nonatomic) NSNumber *kerning; // @synthesize kerning=_kerning;
- (double)kerningValue;
@property(readonly, copy, nonatomic) NSNumber *leading; // @synthesize leading=_leading;
- (double)leadingValue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *regularTypefaceUrl; // @synthesize regularTypefaceUrl=_regularTypefaceUrl;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
- (double)rotationValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUCaptionShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, copy, nonatomic) NSArray *styleProperty; // @synthesize styleProperty=_styleProperty;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
