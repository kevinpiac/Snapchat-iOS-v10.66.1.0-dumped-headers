//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesFetchContext : NSObject <NSCopying>
{
    long long _triggerType;
    long long _fetchSource;
    NSString *_fetchTriggerIdentifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long fetchSource; // @synthesize fetchSource=_fetchSource;
@property(readonly, copy, nonatomic) NSString *fetchTriggerIdentifier; // @synthesize fetchTriggerIdentifier=_fetchTriggerIdentifier;
- (unsigned long long)hash;
- (id)initWithTriggerType:(long long)arg1 fetchSource:(long long)arg2 fetchTriggerIdentifier:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;

@end
