//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, SCSearchQuery;

@protocol SCSearchQueryDuplicationPolicy <NSObject>
- (_Bool)isSearchQueryDuplicated:(SCSearchQuery *)arg1 previousQuery:(SCSearchQuery *)arg2 lastPassedQuery:(SCSearchQuery *)arg3 lastPassedQueryCheckTime:(NSDate *)arg4;
@end

