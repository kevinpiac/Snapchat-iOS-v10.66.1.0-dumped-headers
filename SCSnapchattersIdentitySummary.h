//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchattersGroupSummary, SCSnapchattersSnapchatterSummary;

@interface SCSnapchattersIdentitySummary : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchattersSnapchatterSummary *_snapchatterSummary_snapchatterSummary;
    SCSnapchattersGroupSummary *_groupSummary_groupSummary;
}

+ (id)groupSummaryWithGroupSummary:(id)arg1;
+ (id)snapchatterSummaryWithSnapchatterSummary:(id)arg1;
- (void).cxx_destruct;
- (id)asGroupSummary;
- (id)asSnapchatterSummary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameSubtype:(id)arg1;
- (void)matchSnapchatterSummary:(CDUnknownBlockType)arg1 groupSummary:(CDUnknownBlockType)arg2;
- (unsigned long long)subtype;

@end

