//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSnapchattersUpdateDataRequestSetStoryPrivacy : NSObject <NSCopying>
{
    long long _storyPrivacy;
    NSArray *_userIds;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStoryPrivacy:(long long)arg1 userIds:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(readonly, copy, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;

@end
