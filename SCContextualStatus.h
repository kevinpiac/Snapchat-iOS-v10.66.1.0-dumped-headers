//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCContextualStatus : NSObject <NSCopying>
{
    NSString *_contextualId;
    NSString *_name;
    NSArray *_actionmojis;
    NSString *_creatorUserId;
    long long _rank;
}

+ (id)contextualStatusWithCheckinContextualOption:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *actionmojis; // @synthesize actionmojis=_actionmojis;
@property(readonly, copy, nonatomic) NSString *contextualId; // @synthesize contextualId=_contextualId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *creatorUserId; // @synthesize creatorUserId=_creatorUserId;
- (id)description;
- (unsigned long long)hash;
- (id)initWithContextualId:(id)arg1 name:(id)arg2 creatorUserId:(id)arg3 actionmojis:(id)arg4 rank:(long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long rank; // @synthesize rank=_rank;

@end
