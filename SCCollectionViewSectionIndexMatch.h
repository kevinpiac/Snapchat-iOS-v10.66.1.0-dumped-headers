//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCCollectionViewSectionIndexMatch : NSObject <NSCopying>
{
    unsigned long long _subtype;
    long long _itemIndex_itemIndex;
}

+ (id)itemIndexWithItemIndex:(long long)arg1;
+ (id)noItem;
+ (id)notFound;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchItemIndex:(CDUnknownBlockType)arg1 noItem:(CDUnknownBlockType)arg2 notFound:(CDUnknownBlockType)arg3;

@end

