//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableAttributedString, NSString, UIColor, UIFont;

@interface SCOnboardingTooltipAppearance : NSObject
{
    _Bool _respectsRTLLayout;
    _Bool _triangleHidden;
    NSString *_text;
    NSMutableAttributedString *_attributedText;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    UIFont *_font;
    double _shadowOpacity;
    double _shadowRadius;
    NSString *_accessibilityIdentifier;
    long long _numberOfLines;
    long long _textAlignment;
    double _preferredWidth;
    struct CGSize _shadowOffset;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) NSMutableAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)initWithAttributedString:(id)arg1 backgroundColor:(id)arg2 shadowOpacity:(double)arg3;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3;
- (id)initWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 font:(id)arg4 shadowOpacity:(double)arg5;
- (id)initWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 font:(id)arg4 shadowOpacity:(double)arg5 shadowRadius:(double)arg6 shadowOffset:(struct CGSize)arg7;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property(nonatomic) _Bool respectsRTLLayout; // @synthesize respectsRTLLayout=_respectsRTLLayout;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) _Bool triangleHidden; // @synthesize triangleHidden=_triangleHidden;
@property(readonly, nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

@end
