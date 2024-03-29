//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapchattersIncomingFriendInfo : NSObject <NSCopying>
{
    _Bool _isFriendRequestIgnored;
    _Bool _isFriendRequestViewed;
    NSString *_addSource;
    double _addedByFriendTimestamp;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *addSource; // @synthesize addSource=_addSource;
@property(readonly, nonatomic) double addedByFriendTimestamp; // @synthesize addedByFriendTimestamp=_addedByFriendTimestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAddSource:(id)arg1 addedByFriendTimestamp:(double)arg2 isFriendRequestIgnored:(_Bool)arg3 isFriendRequestViewed:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isFriendRequestIgnored; // @synthesize isFriendRequestIgnored=_isFriendRequestIgnored;
@property(readonly, nonatomic) _Bool isFriendRequestViewed; // @synthesize isFriendRequestViewed=_isFriendRequestViewed;

@end

