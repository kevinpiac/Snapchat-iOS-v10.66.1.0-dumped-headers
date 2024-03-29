//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCEagleSearchType;

@interface SCEagleSearchResult : NSObject <NSCopying>
{
    NSString *_sessionId;
    NSString *_sessionQueryId;
    NSArray *_products;
    NSString *_deeplinkURL;
    SCEagleSearchType *_searchType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
- (unsigned long long)hash;
- (id)initWithSessionId:(id)arg1 sessionQueryId:(id)arg2 products:(id)arg3 deeplinkURL:(id)arg4 searchType:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *products; // @synthesize products=_products;
@property(readonly, copy, nonatomic) SCEagleSearchType *searchType; // @synthesize searchType=_searchType;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *sessionQueryId; // @synthesize sessionQueryId=_sessionQueryId;

@end

