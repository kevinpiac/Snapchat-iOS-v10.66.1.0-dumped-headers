//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCBitmojiSelfieUser : NSObject <NSCopying>
{
    NSString *_userId;
    NSString *_avatarId;
    NSString *_dratiniId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *dratiniId; // @synthesize dratiniId=_dratiniId;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 avatarId:(id)arg2 dratiniId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end
