//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSendToConfirmationItemViewModel : NSObject <NSCopying>
{
    NSString *_itemKey;
    NSString *_itemDisplayName;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithItemKey:(id)arg1 itemDisplayName:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *itemDisplayName; // @synthesize itemDisplayName=_itemDisplayName;
@property(readonly, copy, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;

@end

