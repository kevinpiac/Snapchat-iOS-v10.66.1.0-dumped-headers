//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSearchLoadingAnimationModel : NSObject <NSCopying>
{
    double _scaleBeginTime;
    double _scaleDuration;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithScaleBeginTime:(double)arg1 scaleDuration:(double)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double scaleBeginTime; // @synthesize scaleBeginTime=_scaleBeginTime;
@property(readonly, nonatomic) double scaleDuration; // @synthesize scaleDuration=_scaleDuration;

@end

