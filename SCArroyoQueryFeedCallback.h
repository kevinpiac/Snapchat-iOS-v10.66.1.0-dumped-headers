//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingQueryFeedCallback-Protocol.h"

@interface SCArroyoQueryFeedCallback : NSObject <SCNMessagingQueryFeedCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    CDUnknownBlockType _notBootstrappedCallback;
}

- (void).cxx_destruct;
- (id)initWithSuccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2 notBootstrappedCallback:(CDUnknownBlockType)arg3;
- (void)onBootstrapNotComplete;
- (void)onError:(long long)arg1;
- (void)onQueryFeedComplete:(id)arg1 hasNoMore:(_Bool)arg2;

@end

