//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCAdResponseAdDataV2, SCSnapAdsAdErrorResponse;

@protocol SCSnapAdsAdTransformListener <NSObject>
- (void)onAdTransformComplete:(SCAdResponseAdDataV2 *)arg1 shouldPredownloadMedia:(_Bool)arg2;
- (void)onAdTransformError:(SCSnapAdsAdErrorResponse *)arg1;
@end

