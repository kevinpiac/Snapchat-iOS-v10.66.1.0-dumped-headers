//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCDynamicCaptionTextColor;

@interface SCDynamicCaptionTextShadow : NSObject <NSCopying, NSCoding>
{
    SCDynamicCaptionTextColor *_color;
    double _xOffset;
    double _yOffset;
    double _radius;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 xOffset:(double)arg2 yOffset:(double)arg3 radius:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(readonly, nonatomic) double yOffset; // @synthesize yOffset=_yOffset;

@end

