//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCCheetahFeedAstPoint : NSObject <NSCopying, NSCoding>
{
    double _x;
    double _y;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double x; // @synthesize x=_x;
@property(readonly, nonatomic) double y; // @synthesize y=_y;

@end
