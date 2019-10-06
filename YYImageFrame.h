//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIImage;

@interface YYImageFrame : NSObject <NSCopying>
{
    unsigned long long _index;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _offsetX;
    unsigned long long _offsetY;
    double _duration;
    unsigned long long _dispose;
    unsigned long long _blend;
    UIImage *_image;
}

+ (id)frameWithImage:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long blend; // @synthesize blend=_blend;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long dispose; // @synthesize dispose=_dispose;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) unsigned long long offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;

@end

