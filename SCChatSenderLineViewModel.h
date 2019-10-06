//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor;

@interface SCChatSenderLineViewModel : NSObject <NSCopying>
{
    UIColor *_color;
    double _height;
    double _width;
    unsigned long long _cornerMask;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long cornerMask; // @synthesize cornerMask=_cornerMask;
- (unsigned long long)hash;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (id)initWithColor:(id)arg1 height:(double)arg2 width:(double)arg3 cornerMask:(unsigned long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double width; // @synthesize width=_width;

@end

