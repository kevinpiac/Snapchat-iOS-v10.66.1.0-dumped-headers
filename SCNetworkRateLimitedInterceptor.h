//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworkInterceptor-Protocol.h"

@class NSString;

@interface SCNetworkRateLimitedInterceptor : NSObject <SCNetworkInterceptor>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)interceptWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

