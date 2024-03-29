//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface SCUnifiedProfileCharmsCardTitleViewModel : NSObject <NSCopying>
{
    NSString *_title;
    UIColor *_textColor;
    double _largeTitleFontSize;
    double _largeTitleLineHeight;
    double _largeTitleNumberOfLines;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 textColor:(id)arg2 largeTitleFontSize:(double)arg3 largeTitleLineHeight:(double)arg4 largeTitleNumberOfLines:(double)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double largeTitleFontSize; // @synthesize largeTitleFontSize=_largeTitleFontSize;
@property(readonly, nonatomic) double largeTitleLineHeight; // @synthesize largeTitleLineHeight=_largeTitleLineHeight;
@property(readonly, nonatomic) double largeTitleNumberOfLines; // @synthesize largeTitleNumberOfLines=_largeTitleNumberOfLines;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

