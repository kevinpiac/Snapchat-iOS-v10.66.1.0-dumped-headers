//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SCNMessagingUUID : NSObject <NSCopying>
{
    NSData *_id;
}

+ (id)RandomUUID;
+ (id)UUIDWithId:(id)arg1;
+ (id)UUIDWithString:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSData *id; // @synthesize id=_id;
- (id)initWithId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)toString;

@end

