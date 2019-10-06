//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCFriendsFeedFetchContext : NSObject <NSCopying>
{
    long long _triggerType;
    long long _serviceType;
    double _requestTimestamp;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTriggerType:(long long)arg1 serviceType:(long long)arg2 requestTimestamp:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;

@end
