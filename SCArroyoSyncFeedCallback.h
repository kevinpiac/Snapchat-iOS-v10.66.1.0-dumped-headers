//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingSyncFeedCallback-Protocol.h"

@interface SCArroyoSyncFeedCallback : NSObject <SCNMessagingSyncFeedCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    CDUnknownBlockType _notBootstrappedCallback;
}

- (void).cxx_destruct;
- (id)initWithSucccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2 notBootstrappedCallback:(CDUnknownBlockType)arg3;
- (void)onBootstrapNotComplete;
- (void)onError:(long long)arg1;
- (void)onSyncFeedComplete:(id)arg1 feedEntriesDeleted:(id)arg2 resetFeed:(_Bool)arg3;

@end
