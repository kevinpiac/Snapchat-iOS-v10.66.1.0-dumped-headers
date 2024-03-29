//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCDiscoverFeedHorizontalSectionStyle, SCDiscoverFeedVerticalSectionStyle;

@interface SCDiscoverFeedSectionLayoutStyle : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCDiscoverFeedVerticalSectionStyle *_verticalSectionStyle_verticalSectionStyle;
    SCDiscoverFeedHorizontalSectionStyle *_horizontalSectionStyle_horizontalSectionStyle;
}

+ (id)horizontalSectionStyleWithHorizontalSectionStyle:(id)arg1;
+ (id)verticalSectionStyleWithVerticalSectionStyle:(id)arg1;
- (void).cxx_destruct;
- (id)asHorizontalSectionStyle;
- (id)asVerticalSectionStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameSubtype:(id)arg1;
- (void)matchVerticalSectionStyle:(CDUnknownBlockType)arg1 horizontalSectionStyle:(CDUnknownBlockType)arg2;
- (unsigned long long)subtype;

@end

