//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesOperaPlayableDataModel : NSObject <NSCopying>
{
    NSString *_identifier;
    long long _type;
    unsigned long long _itemPosition;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 itemPosition:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long itemPosition; // @synthesize itemPosition=_itemPosition;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end
