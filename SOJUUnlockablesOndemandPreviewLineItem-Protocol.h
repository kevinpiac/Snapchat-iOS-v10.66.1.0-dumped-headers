//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUUnlockablesOndemandLineItem-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUUnlockablesOndemandApprovalStatus, SOJUUnlockablesOndemandAsset, SOJUUnlockablesOndemandAutoApprovalResult, SOJUUnlockablesOndemandCancellation, SOJUUnlockablesOndemandCountry, SOJUUnlockablesOndemandLease, SOJUUnlockablesOndemandLineItemProperties, SOJUUnlockablesOndemandMobilePayment, SOJUUnlockablesOndemandOwner, SOJUUnlockablesOndemandPayment, SOJUUnlockablesOndemandPriceCalculation, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandServing, SOJUUnlockablesOndemandSubmission, SOJUUnlockablesOndemandTargeting;

@protocol SOJUUnlockablesOndemandPreviewLineItem <NSObject, NSCoding, NSCopying, SOJUUnlockablesOndemandLineItem>
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandApprovalStatus *approval;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandAsset *asset;
@property(readonly, copy, nonatomic) NSArray *assets;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandAutoApprovalResult *autoApprovalResult;
@property(readonly, copy, nonatomic) NSString *bundleLineitemId;
@property(readonly, copy, nonatomic) NSNumber *canResubmitRejectedFilter;
@property(readonly, copy, nonatomic) NSNumber *canSubmitRedesignForAccepted;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandCancellation *cancellation;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandCountry *country;
@property(readonly, copy, nonatomic) NSString *discountCode;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandLease *lease;
@property(readonly, copy, nonatomic) NSString *locale;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMobilePayment *mobilePayment;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandPriceCalculation *offer;
@property(readonly, copy, nonatomic) NSString *orgCountry;
@property(readonly, copy, nonatomic) NSString *orgCurrency;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandOwner *owner;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandPayment *payment;
@property(readonly, copy, nonatomic) NSNumber *paymentCollectedBeforeSubmission;
@property(readonly, copy, nonatomic) NSNumber *paymentOnSubmission;
@property(readonly, copy, nonatomic) NSString *preRenderingAssetsStructuredId;
@property(readonly, copy, nonatomic) NSString *previewRequestId;
@property(readonly, copy, nonatomic) NSString *productType;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandLineItemProperties *properties;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSchedule *schedule;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandServing *serving;
@property(readonly, copy, nonatomic) NSNumber *shouldAvoidOrgApiCalls;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSubmission *submission;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandTargeting *targeting;
@property(readonly, copy, nonatomic) NSString *templateId;
@property(readonly, copy, nonatomic) NSString *templateInstanceId;
@property(readonly, copy, nonatomic) NSString *tosVersion;
@property(readonly, copy, nonatomic) NSString *userAgent;
@end

