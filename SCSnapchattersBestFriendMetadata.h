//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSnapchattersBestFriendMetadata : SCDocObject <NSCopying>
{
    unsigned int _type;
    NSArray *_usernames;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithType:(unsigned int)arg1 usernames:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSArray *usernames; // @synthesize usernames=_usernames;

@end
