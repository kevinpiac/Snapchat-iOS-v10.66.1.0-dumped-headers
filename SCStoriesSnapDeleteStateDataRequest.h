//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesSnapDeleteStateDataRequest : NSObject <NSCopying>
{
    NSString *_snapUniqueConsistentId;
    NSString *_serverId;
    long long _deleteState;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long deleteState; // @synthesize deleteState=_deleteState;
- (unsigned long long)hash;
- (id)initWithSnapUniqueConsistentId:(id)arg1 serverId:(id)arg2 deleteState:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(readonly, copy, nonatomic) NSString *snapUniqueConsistentId; // @synthesize snapUniqueConsistentId=_snapUniqueConsistentId;

@end

