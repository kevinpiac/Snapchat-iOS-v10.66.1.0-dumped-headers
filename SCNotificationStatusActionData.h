//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCNotificationStatusActionData : NSObject <NSCopying>
{
    _Bool _isDoNotDisturb;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithIsDoNotDisturb:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isDoNotDisturb; // @synthesize isDoNotDisturb=_isDoNotDisturb;
- (_Bool)isEqual:(id)arg1;

@end

