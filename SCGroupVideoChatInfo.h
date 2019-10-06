//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCGroupVideoChatInfo : NSObject <NSCopying>
{
    NSString *_mac;
    NSString *_token;
    NSString *_scopeId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMac:(id)arg1 token:(id)arg2 scopeId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(readonly, copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;

@end

