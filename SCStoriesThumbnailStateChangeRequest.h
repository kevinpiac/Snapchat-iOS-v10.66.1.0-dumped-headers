//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesThumbnailStateChangeRequest : NSObject <NSCopying>
{
    NSString *_cacheKey;
    unsigned long long _thumbnailType;
    long long _state;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithCacheKey:(id)arg1 thumbnailType:(unsigned long long)arg2 state:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long thumbnailType; // @synthesize thumbnailType=_thumbnailType;

@end

