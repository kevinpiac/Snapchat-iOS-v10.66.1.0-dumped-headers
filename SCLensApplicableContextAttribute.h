//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSSet, NSString;

@interface SCLensApplicableContextAttribute : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_applicableContext_applicableContext;
    NSSet *_anyApplicableContextInSet_applicableContexts;
}

+ (id)anyApplicableContextInSetWithApplicableContexts:(id)arg1;
+ (id)applicableContextWithApplicableContext:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchApplicableContext:(CDUnknownBlockType)arg1 anyApplicableContextInSet:(CDUnknownBlockType)arg2;

@end

