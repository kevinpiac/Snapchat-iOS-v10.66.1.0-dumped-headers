//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCOperaAnimatedContent : NSObject <NSCopying>
{
    double _rotation;
    double _scale;
    NSString *_imageKey;
    struct CGSize _relativeSize;
    struct CGPoint _center;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
- (id)initOperaAnimatedContentWithImageKey:(id)arg1 relativeSize:(struct CGSize)arg2 center:(struct CGPoint)arg3 rotation:(double)arg4 scale:(double)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize relativeSize; // @synthesize relativeSize=_relativeSize;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;

@end
