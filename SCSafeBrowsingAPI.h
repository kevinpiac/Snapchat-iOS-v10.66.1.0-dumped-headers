//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCSessionRequestManager;

@interface SCSafeBrowsingAPI : NSObject <SCUserSessionScoped>
{
    SCSessionRequestManager *_requestManager;
}

+ (_Bool)_isTrustedHost:(id)arg1;
- (void).cxx_destruct;
- (void)checkUrl:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1;
- (void)invalidate;
- (id)learnMoreURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

