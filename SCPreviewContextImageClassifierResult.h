//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCPreviewContextImageClassifierResult : NSObject <NSCopying>
{
    NSArray *_tags;
    NSArray *_confidenceInfos;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *confidenceInfos; // @synthesize confidenceInfos=_confidenceInfos;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTags:(id)arg1 confidenceInfos:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;

@end

