//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCConversationCashPayment, SCConversationCashRain;

@interface SCConversationCash : NSObject <NSCopying>
{
    SCConversationCashPayment *_cashPayment;
    SCConversationCashRain *_cashRain;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCConversationCashPayment *cashPayment; // @synthesize cashPayment=_cashPayment;
@property(readonly, copy, nonatomic) SCConversationCashRain *cashRain; // @synthesize cashRain=_cashRain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithCashPayment:(id)arg1 cashRain:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end
