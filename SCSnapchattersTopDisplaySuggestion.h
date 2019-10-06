//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSnapchattersTopDisplaySuggestion : SCDocObject <NSCopying>
{
    unsigned int _page;
    NSArray *_userIds;
    double _topSuggestionsExpirationTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithPage:(unsigned int)arg1 userIds:(id)arg2 topSuggestionsExpirationTimestamp:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int page; // @synthesize page=_page;
@property(readonly, nonatomic) double topSuggestionsExpirationTimestamp; // @synthesize topSuggestionsExpirationTimestamp=_topSuggestionsExpirationTimestamp;
@property(readonly, copy, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;

@end
