//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString;

@interface SCSubscriptionUtil_legacy : NSObject <SCTraceEnabled>
{
}

+ (id)_parameterJsonForContent:(id)arg1;
+ (void)subscribeToContent:(id)arg1 requestManager:(id)arg2 successCompletion:(CDUnknownBlockType)arg3 shouldSendNetworkRequest:(_Bool)arg4;
+ (void)unsubscribeFromContent:(id)arg1 requestManager:(id)arg2 successCompletion:(CDUnknownBlockType)arg3 shouldSendNetworkRequest:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

