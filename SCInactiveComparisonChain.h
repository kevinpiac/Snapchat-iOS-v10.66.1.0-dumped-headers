//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComparisonChain.h"

@interface SCInactiveComparisonChain : SCComparisonChain
{
    long long _result;
}

+ (id)greater;
+ (id)less;
- (id)compareLeft:(id)arg1 right:(id)arg2 comparator:(CDUnknownBlockType)arg3;
- (id)compareNumbersWithLeft:(id)arg1 right:(id)arg2;
- (id)compareStringsWithLeft:(id)arg1 right:(id)arg2;
- (id)falseFirstWithLeft:(_Bool)arg1 right:(_Bool)arg2;
- (id)initWithResult:(long long)arg1;
- (long long)result;
- (id)trueFirstWithLeft:(_Bool)arg1 right:(_Bool)arg2;

@end

