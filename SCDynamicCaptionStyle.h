//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCDynamicCaptionBackgroundStyle, SCDynamicCaptionFontStyle, UIColor;

@interface SCDynamicCaptionStyle : NSObject <NSCopying, NSCoding>
{
    _Bool _isColorChangeable;
    NSString *_styleId;
    NSString *_displayName;
    SCDynamicCaptionFontStyle *_fontStyle;
    SCDynamicCaptionBackgroundStyle *_backgroundStyle;
    UIColor *_baseColor;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCDynamicCaptionBackgroundStyle *backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, copy, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) SCDynamicCaptionFontStyle *fontStyle; // @synthesize fontStyle=_fontStyle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyleId:(id)arg1 displayName:(id)arg2 fontStyle:(id)arg3 backgroundStyle:(id)arg4 isColorChangeable:(_Bool)arg5 baseColor:(id)arg6;
@property(readonly, nonatomic) _Bool isColorChangeable; // @synthesize isColorChangeable=_isColorChangeable;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;

@end

