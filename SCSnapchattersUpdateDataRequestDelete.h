//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchatter;

@interface SCSnapchattersUpdateDataRequestDelete : NSObject <NSCopying>
{
    SCSnapchatter *_aFriend;
    long long _deleteSource;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapchatter *aFriend; // @synthesize aFriend=_aFriend;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long deleteSource; // @synthesize deleteSource=_deleteSource;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAFriend:(id)arg1 deleteSource:(long long)arg2;
- (_Bool)isEqual:(id)arg1;

@end

