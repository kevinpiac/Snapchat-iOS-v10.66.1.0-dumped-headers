//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCDiscoverFeedQueryParameters : NSObject <NSCopying>
{
    unsigned long long _feedType;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
- (unsigned long long)hash;
- (id)initWithFeedType:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;

@end
