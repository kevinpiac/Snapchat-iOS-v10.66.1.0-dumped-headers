//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCReceiveMessageTimestamp : NSObject <NSCopying>
{
    NSString *_conversationId;
    long long _step;
    double _timestampInSeconds;
    long long _timestampType;
    long long _result;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithConversationId:(id)arg1 step:(long long)arg2 timestampInSeconds:(double)arg3 timestampType:(long long)arg4 result:(long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) long long step; // @synthesize step=_step;
@property(readonly, nonatomic) double timestampInSeconds; // @synthesize timestampInSeconds=_timestampInSeconds;
@property(readonly, nonatomic) long long timestampType; // @synthesize timestampType=_timestampType;

@end

