//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCPaymentsUtils : NSObject
{
}

+ (id)cardBrandNameForCardNetwork:(long long)arg1;
+ (long long)cardNetworkForCardBrandName:(id)arg1;
+ (long long)cardNetworkForCardType:(id)arg1;
+ (id)cardTypeForCardNetwork:(long long)arg1;
+ (id)paymentsBrandInformationList;

@end
