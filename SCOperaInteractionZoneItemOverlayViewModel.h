//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface SCOperaInteractionZoneItemOverlayViewModel : NSObject <NSCopying>
{
    _Bool _isHorizontalCentered;
    NSString *_title;
    NSString *_subtitle;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    double _titleFontSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 backgroundColor:(id)arg3 titleColor:(id)arg4 titleFontSize:(double)arg5 isHorizontalCentered:(_Bool)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isHorizontalCentered; // @synthesize isHorizontalCentered=_isHorizontalCentered;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;

@end
