//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCTV3TableContentInsetUpdateMode : NSObject <NSCopying>
{
    unsigned long long _subtype;
    double _fromAffectingViewsAndOverridenInset_overridenInset;
}

+ (id)fromAffectingViewsAndOverridenInsetWithOverridenInset:(double)arg1;
+ (id)fromAffectingViewsOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchFromAffectingViewsOnly:(CDUnknownBlockType)arg1 fromAffectingViewsAndOverridenInset:(CDUnknownBlockType)arg2;

@end

