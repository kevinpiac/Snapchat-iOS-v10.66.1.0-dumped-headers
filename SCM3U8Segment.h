//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURL, NSValue;

@interface SCM3U8Segment : NSObject <NSCopying>
{
    NSURL *_url;
    double _duration;
    NSValue *_byteRangeValue;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSValue *byteRangeValue; // @synthesize byteRangeValue=_byteRangeValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (unsigned long long)hash;
- (id)initWithUrl:(id)arg1 duration:(double)arg2 byteRangeValue:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

@end

