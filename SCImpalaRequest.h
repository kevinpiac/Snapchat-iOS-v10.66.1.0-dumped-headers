//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCanceling-Protocol.h"

@class NSString, SCSessionRequestManager;

@interface SCImpalaRequest : NSObject <SCCanceling>
{
    NSString *_requestKey;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequestKey:(id)arg1 requestManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

