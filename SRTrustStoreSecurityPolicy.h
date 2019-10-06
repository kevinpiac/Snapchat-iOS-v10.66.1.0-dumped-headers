//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SRSecurityPolicy.h"

@class NSSet;

@interface SRTrustStoreSecurityPolicy : SRSecurityPolicy
{
    NSSet *_trustStore;
}

- (void).cxx_destruct;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (id)initWithCertificates:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *trustStore; // @synthesize trustStore=_trustStore;

@end

