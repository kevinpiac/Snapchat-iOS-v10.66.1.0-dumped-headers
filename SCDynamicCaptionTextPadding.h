//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCDynamicCaptionTextPadding : NSObject <NSCopying, NSCoding>
{
    double _topPadding;
    double _leftPadding;
    double _rightPadding;
    double _bottomPadding;
}

@property(readonly, nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopPadding:(double)arg1 leftPadding:(double)arg2 rightPadding:(double)arg3 bottomPadding:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(readonly, nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(readonly, nonatomic) double topPadding; // @synthesize topPadding=_topPadding;

@end
