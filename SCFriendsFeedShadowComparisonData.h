//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCFriendsFeedFetchContext;

@interface SCFriendsFeedShadowComparisonData : NSObject <NSCopying>
{
    SCFriendsFeedFetchContext *_fetchContext;
    NSArray *_feedEntries;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *feedEntries; // @synthesize feedEntries=_feedEntries;
@property(readonly, copy, nonatomic) SCFriendsFeedFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
- (unsigned long long)hash;
- (id)initWithFetchContext:(id)arg1 feedEntries:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end
