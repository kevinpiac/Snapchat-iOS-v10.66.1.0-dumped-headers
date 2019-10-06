//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNContentManagerCacheMetrics : NSObject
{
    long long _cacheQueryStartTimestamp;
    long long _cacheQueryEndTimestamp;
}

+ (id)CacheMetricsWithCacheQueryStartTimestamp:(long long)arg1 cacheQueryEndTimestamp:(long long)arg2;
@property(readonly, nonatomic) long long cacheQueryEndTimestamp; // @synthesize cacheQueryEndTimestamp=_cacheQueryEndTimestamp;
@property(readonly, nonatomic) long long cacheQueryStartTimestamp; // @synthesize cacheQueryStartTimestamp=_cacheQueryStartTimestamp;
- (id)description;
- (id)initWithCacheQueryStartTimestamp:(long long)arg1 cacheQueryEndTimestamp:(long long)arg2;

@end

