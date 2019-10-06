//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCDiscoverFeedSectionLayoutType : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    long long _verticalSection_gridStyle;
    long long _horizontalSection_itemStyle;
}

+ (id)horizontalSectionWithItemStyle:(long long)arg1;
+ (id)verticalSectionWithGridStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchVerticalSection:(CDUnknownBlockType)arg1 horizontalSection:(CDUnknownBlockType)arg2;

@end
