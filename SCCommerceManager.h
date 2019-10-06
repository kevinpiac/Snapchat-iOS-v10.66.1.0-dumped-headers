//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCache, SCRequestManager, SCUserSession;
@protocol SCCommerceTokenUpdating, SCPerforming;

@interface SCCommerceManager : NSObject
{
    id <SCPerforming> _workPerformer;
    SCRequestManager *_requestManager;
    id <SCCommerceTokenUpdating> _tokenUpdater;
    SCUserSession *_userSession;
    SCCache *_cache;
}

- (void).cxx_destruct;
- (id)_errorForBadSojuModel:(id)arg1;
- (void)_fetchPaymentMethodsWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_fetchProductsWithStoreInfo:(id)arg1 categoryId:(id)arg2 limit:(id)arg3 offset:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)_getAccountInfoWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_getBraintreeClientTokenWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)_getEndpointforEnvironment;
- (void)_objectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_objectForKey:(id)arg1 resetExpirationWithInterval:(double)arg2 whenLessThanDelta:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_postTokenizedPaymentMethod:(id)arg1 paymentCard:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 creditCardId:(id)arg5 metricsJsonMetadata:(id)arg6;
- (void)_removeAllObjects;
- (void)_removeObjectWithKeys:(id)arg1;
- (void)_removePaymentInCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeShippingAddressInCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendAccountInfoRequestWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_sendRequestToProxyEndpoint:(id)arg1 parameters:(id)arg2 headers:(id)arg3 payload:(id)arg4 requestUUID:(id)arg5 requestMethod:(long long)arg6 metricsEndpoint:(unsigned long long)arg7 metricsUserAction:(unsigned long long)arg8 metricsJsonMetadata:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failureBlock:(CDUnknownBlockType)arg11;
- (void)_sendRequestToProxyEndpoint:(id)arg1 parameters:(id)arg2 headers:(id)arg3 payload:(id)arg4 requestUUID:(id)arg5 requestMethod:(long long)arg6 metricsEndpoint:(unsigned long long)arg7 metricsUserAction:(unsigned long long)arg8 metricsJsonMetadata:(id)arg9 timeout:(double)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12;
- (void)_sendRequestToProxyEndpoint:(id)arg1 parameters:(id)arg2 headers:(id)arg3 payload:(id)arg4 token:(id)arg5 requestUUID:(id)arg6 requestMethod:(long long)arg7 metricsEndpoint:(unsigned long long)arg8 metricsUserAction:(unsigned long long)arg9 metricsJsonMetadata:(id)arg10 timeout:(double)arg11 successBlock:(CDUnknownBlockType)arg12 failureBlock:(CDUnknownBlockType)arg13;
- (void)_setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_tokenizeAndSavePaymentMethod:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 update:(_Bool)arg4 metricsJsonMetadata:(id)arg5;
- (void)_updateContactDetailsInCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updatePaymentInCache:(id)arg1 paymentMethod:(id)arg2 updateRequest:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateShippingAddressInCache:(id)arg1 addingNew:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addNewShippingAddress:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)addPaymentMethod:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 metricsJsonMetadata:(id)arg4;
- (id)cart;
- (id)cartSubTotalAmountForStoreId:(id)arg1;
- (id)checkoutLineItemsArrayForCheckoutComparisonForStoreId:(id)arg1;
- (id)checkoutLineItemsArrayForStoreId:(id)arg1;
- (void)clear;
- (void)clearCurrentCartWithStoreId:(id)arg1;
- (id)convertToPaymentMethodsFromSojuList:(id)arg1;
- (void)createNewCheckoutWithStoreId:(id)arg1 contactDetails:(id)arg2 shippingAddress:(id)arg3 partner:(id)arg4 lineItems:(id)arg5 completionBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)deleteCheckout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)deletePaymentMethod:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)deleteShippingAddress:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchOrderHistorySkipCacheWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)finalizeCheckout:(id)arg1 paymentRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getAccountInfoWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)getCategoryProductsWithStoreInfo:(id)arg1 categoryId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getContactDetailsWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)getOrderHistoryWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getPaymentMethodsWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)getProductInfoWithId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getProductsWithStoreInfo:(id)arg1 categoryId:(id)arg2 limit:(id)arg3 offset:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)getProductsWithStoreInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getShippingAddressesWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)getStoreInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1 tokenUpdater:(id)arg2 cache:(id)arg3 userSession:(id)arg4;
- (id)lineItemsArrayForStoreId:(id)arg1;
- (long long)numberOfItemsInCartForStoreId:(id)arg1;
- (void)prefetchCheckoutData;
- (void)updateCheckout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateContactDetails:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updatePaymentMethod:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateShippingAddress:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)uploadBitmojiAssetInfo:(id)arg1 assetId:(id)arg2 userIds:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)uploadBitmojiProductImage:(id)arg1 lineItem:(id)arg2 userIds:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) id <SCPerforming> workPerformer; // @synthesize workPerformer=_workPerformer;

@end
