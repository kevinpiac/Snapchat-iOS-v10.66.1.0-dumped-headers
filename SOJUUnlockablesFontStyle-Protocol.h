//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUUnlockablesTextColor, SOJUUnlockablesTextPadding;

@protocol SOJUUnlockablesFontStyle <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *backgroundImageUrl;
@property(readonly, copy, nonatomic) NSString *backgroundRepeat;
@property(readonly, copy, nonatomic) SOJUUnlockablesTextColor *borderColor;
@property(readonly, copy, nonatomic) NSNumber *fontBorderWidth;
@property(readonly, copy, nonatomic) SOJUUnlockablesTextColor *fontColor;
@property(readonly, copy, nonatomic) NSString *fontName;
@property(readonly, copy, nonatomic) NSNumber *fontSize;
@property(readonly, copy, nonatomic) NSString *fontUrl;
@property(readonly, copy, nonatomic) NSNumber *letterSpacing;
@property(readonly, copy, nonatomic) NSNumber *lineHeight;
@property(readonly, copy, nonatomic) NSNumber *maxFontSize;
@property(readonly, copy, nonatomic) NSNumber *minFontSize;
@property(readonly, copy, nonatomic) SOJUUnlockablesTextPadding *padding;
@property(readonly, copy, nonatomic) NSString *textAlign;
@property(readonly, copy, nonatomic) NSString *textDecoration;
@property(readonly, copy, nonatomic) NSArray *textShadow;
@property(readonly, copy, nonatomic) NSString *textTransform;
@end

