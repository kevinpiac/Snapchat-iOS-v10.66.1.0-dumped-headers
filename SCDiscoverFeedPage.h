//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCDiscoverFeedPage : SCDocObject <NSCopying>
{
    long long _pageType;
    NSArray *_feedTypes;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *feedTypes; // @synthesize feedTypes=_feedTypes;
- (unsigned long long)hash;
- (id)initWithPageType:(long long)arg1 feedTypes:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long pageType; // @synthesize pageType=_pageType;

@end

