//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAGeofilterOndemandEventBase.h"

@class NSNumber, NSString;

@interface SCAGeofilterOndemandAutoReview : SCAGeofilterOndemandEventBase
{
    NSNumber *userCanMakePayments;
    NSString *preRenderingAssetStructureId;
    NSString *autoApprovalStatus;
    NSString *autoRejectionCode;
    NSString *autoUndecidedCode;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAutoApprovalStatus;
- (id)getAutoRejectionCode;
- (id)getAutoUndecidedCode;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getPreRenderingAssetStructureId;
- (_Bool)getUserCanMakePayments;
- (void)setAutoApprovalStatus:(id)arg1;
- (void)setAutoRejectionCode:(id)arg1;
- (void)setAutoUndecidedCode:(id)arg1;
- (void)setPreRenderingAssetStructureId:(id)arg1;
- (void)setUserCanMakePayments:(_Bool)arg1;

@end

