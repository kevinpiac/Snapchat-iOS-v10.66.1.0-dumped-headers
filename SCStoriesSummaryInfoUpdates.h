//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoriesSummaryInfoUpdates : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)rankedIdentifiers;
+ (id)summariesInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchRankedIdentifiers:(CDUnknownBlockType)arg1 summariesInfo:(CDUnknownBlockType)arg2;

@end
