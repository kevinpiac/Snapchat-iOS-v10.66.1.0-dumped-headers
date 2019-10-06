//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString, SCFriendsFeedPaginationMetadata, SCFriendsFeedSyncMetadata;

@interface SCFriendsFeedMetadata : SCDocObject <NSCopying>
{
    NSString *_userId;
    SCFriendsFeedSyncMetadata *_syncMetadata;
    SCFriendsFeedPaginationMetadata *_paginationMetadata;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 syncMetadata:(id)arg2 paginationMetadata:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCFriendsFeedPaginationMetadata *paginationMetadata; // @synthesize paginationMetadata=_paginationMetadata;
@property(readonly, copy, nonatomic) SCFriendsFeedSyncMetadata *syncMetadata; // @synthesize syncMetadata=_syncMetadata;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

