//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SCAdServeInventory : NSObject <NSCopying>
{
    NSArray *_adIdentifiers;
    NSDictionary *_targeting;
    NSString *_publisherSlotId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *adIdentifiers; // @synthesize adIdentifiers=_adIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAdIdentifiers:(id)arg1 targeting:(id)arg2 publisherSlotId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *publisherSlotId; // @synthesize publisherSlotId=_publisherSlotId;
@property(readonly, copy, nonatomic) NSDictionary *targeting; // @synthesize targeting=_targeting;

@end
