//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSnapchatter : NSObject <NSCopying>
{
    _Bool _isUserPopular;
    NSString *_userId;
    NSString *_username;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 username:(id)arg2 isUserPopular:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isUserPopular; // @synthesize isUserPopular=_isUserPopular;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end
