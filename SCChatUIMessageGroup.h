//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCChatUIMessageGroup : NSObject <NSCopying>
{
    NSArray *_group;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *group; // @synthesize group=_group;
- (unsigned long long)hash;
- (id)initWithGroup:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

