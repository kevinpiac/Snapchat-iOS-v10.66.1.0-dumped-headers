//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCPixelRequestDataModel : NSObject <NSCopying>
{
    _Bool _success;
    NSString *_pixelId;
    NSString *_eventType;
    NSString *_sdkVersion;
    double _timestamp;
    NSString *_key;
    NSString *_hashedEmail;
    NSString *_hashedPhoneNum;
    NSString *_hashedAdId;
    NSString *_itemIds;
    unsigned long long _numItems;
    NSString *_currency;
    NSNumber *_price;
    NSNumber *_paymentInfoAvailable;
    NSString *_transactionId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *hashedAdId; // @synthesize hashedAdId=_hashedAdId;
@property(readonly, copy, nonatomic) NSString *hashedEmail; // @synthesize hashedEmail=_hashedEmail;
@property(readonly, copy, nonatomic) NSString *hashedPhoneNum; // @synthesize hashedPhoneNum=_hashedPhoneNum;
- (id)initWithPixelId:(id)arg1 eventType:(id)arg2 sdkVersion:(id)arg3 timestamp:(double)arg4 key:(id)arg5 hashedEmail:(id)arg6 hashedPhoneNum:(id)arg7 hashedAdId:(id)arg8 itemIds:(id)arg9 numItems:(unsigned long long)arg10 currency:(id)arg11 price:(id)arg12 success:(_Bool)arg13 paymentInfoAvailable:(id)arg14 transactionId:(id)arg15;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *itemIds; // @synthesize itemIds=_itemIds;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) unsigned long long numItems; // @synthesize numItems=_numItems;
@property(readonly, copy, nonatomic) NSNumber *paymentInfoAvailable; // @synthesize paymentInfoAvailable=_paymentInfoAvailable;
@property(readonly, copy, nonatomic) NSString *pixelId; // @synthesize pixelId=_pixelId;
@property(readonly, copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;

@end
