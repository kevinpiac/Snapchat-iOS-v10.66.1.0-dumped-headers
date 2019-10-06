//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCCustomStatus : NSObject <NSCopying>
{
    NSString *_customId;
    NSString *_placeholder;
    NSString *_prefix;
    NSArray *_actionmojis;
    long long _rank;
}

+ (id)customStatusWithCheckinCustomOption:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *actionmojis; // @synthesize actionmojis=_actionmojis;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *customId; // @synthesize customId=_customId;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCustomId:(id)arg1 placeholder:(id)arg2 prefix:(id)arg3 actionmojis:(id)arg4 rank:(long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) long long rank; // @synthesize rank=_rank;

@end

