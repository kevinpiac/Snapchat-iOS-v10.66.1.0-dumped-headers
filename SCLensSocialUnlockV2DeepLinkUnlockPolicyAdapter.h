//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensSocialUnlockV2DeepLinkUnlockPolicy-Protocol.h"

@class NSString;
@protocol SCContextV2DeepLinkUnlockPolicy;

@interface SCLensSocialUnlockV2DeepLinkUnlockPolicyAdapter : NSObject <SCLensSocialUnlockV2DeepLinkUnlockPolicy>
{
    id <SCContextV2DeepLinkUnlockPolicy> _deepLinkUnlockPolicy;
}

- (void).cxx_destruct;
- (_Bool)canUnlockDeepLinkURL:(id)arg1;
- (id)initWithContextV2DeepLinkUnlockPolicy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

