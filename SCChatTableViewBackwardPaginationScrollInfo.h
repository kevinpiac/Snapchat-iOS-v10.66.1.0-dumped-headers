//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCChatTableViewBackwardPaginationScrollInfo : NSObject <NSCopying>
{
    _Bool _shouldScrollForBackwardPagination;
    unsigned long long _indexRowForPagination;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long indexRowForPagination; // @synthesize indexRowForPagination=_indexRowForPagination;
- (id)initWithShouldScrollForBackwardPagination:(_Bool)arg1 indexRowForPagination:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool shouldScrollForBackwardPagination; // @synthesize shouldScrollForBackwardPagination=_shouldScrollForBackwardPagination;

@end

