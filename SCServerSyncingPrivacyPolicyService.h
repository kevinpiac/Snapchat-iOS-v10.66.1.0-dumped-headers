//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPrivacyPolicyService-Protocol.h"

@class SCFeatureSettingsManager;

@interface SCServerSyncingPrivacyPolicyService : NSObject <SCPrivacyPolicyService>
{
    SCFeatureSettingsManager *_featureSettingsManager;
}

- (void).cxx_destruct;
- (void)acknowledgePrivacyPolicy;
- (_Bool)hasSeenPrivacyPolicy;
- (id)initWithFeatureSettingsManager:(id)arg1;

@end
