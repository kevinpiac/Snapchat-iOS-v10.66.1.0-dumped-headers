//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedCompositeStoryId;

@interface SCSearchDynamicStoriesInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isShareable;
    _Bool _needDeltaFetch;
    unsigned long long _totalSnapCount;
    NSString *_dynamicStoryId;
    double _totalDuration;
    long long _dynamicStoryType;
    SCDiscoverFeedCompositeStoryId *_compositeStoryId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCDiscoverFeedCompositeStoryId *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *dynamicStoryId; // @synthesize dynamicStoryId=_dynamicStoryId;
@property(readonly, nonatomic) long long dynamicStoryType; // @synthesize dynamicStoryType=_dynamicStoryType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTotalSnapCount:(unsigned long long)arg1 dynamicStoryId:(id)arg2 totalDuration:(double)arg3 dynamicStoryType:(long long)arg4 compositeStoryId:(id)arg5 isShareable:(_Bool)arg6 needDeltaFetch:(_Bool)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;
@property(readonly, nonatomic) _Bool needDeltaFetch; // @synthesize needDeltaFetch=_needDeltaFetch;
@property(readonly, nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, nonatomic) unsigned long long totalSnapCount; // @synthesize totalSnapCount=_totalSnapCount;

@end
