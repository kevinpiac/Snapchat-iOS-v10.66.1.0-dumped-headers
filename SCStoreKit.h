//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSString;

@interface SCStoreKit : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    NSMutableDictionary *_availableProducts;
    NSMapTable *_productsRequestIds;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)canMakePayments;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)availableProducts;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)failedTransaction:(id)arg1 inQueue:(id)arg2;
- (void)finishTransactionForProductIdentifier:(id)arg1;
- (id)init;
- (_Bool)initiatePaymentRequestForProductWithIdentifier:(id)arg1;
- (_Bool)initiatePaymentRequestForProductWithIdentifier:(id)arg1 andApplicationUsername:(id)arg2;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (_Bool)paymentQueueContainsPaymentId:(id)arg1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (id)productWithID:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)refreshAppStoreReceipt;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)restorePurchases;
- (void)setAvailableProducts:(id)arg1;
- (id)startProductRequestWithProductIdentifiers:(id)arg1;
- (id)transactions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

