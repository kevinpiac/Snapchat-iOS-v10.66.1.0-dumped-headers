//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCommerceSession.h"

@class NSString;

@interface SCCommerceSnapToProductSession : SCCommerceSession
{
    NSString *_scannableId;
    NSString *_scannableData;
    NSString *_scanSessionId;
    long long _scanSource;
}

+ (long long)originTypeForScanSource:(long long)arg1 deeplinkSource:(long long)arg2;
- (void).cxx_destruct;
- (id)initWithScanSource:(long long)arg1 deeplinkSource:(long long)arg2 productId:(id)arg3 storeId:(id)arg4 scannableId:(id)arg5 scannableData:(id)arg6;
- (void)populateBasePropertiesForEvent:(id)arg1;
@property(retain, nonatomic) NSString *scanSessionId; // @synthesize scanSessionId=_scanSessionId;
@property(nonatomic) long long scanSource; // @synthesize scanSource=_scanSource;
@property(retain, nonatomic) NSString *scannableData; // @synthesize scannableData=_scannableData;
@property(retain, nonatomic) NSString *scannableId; // @synthesize scannableId=_scannableId;

@end

