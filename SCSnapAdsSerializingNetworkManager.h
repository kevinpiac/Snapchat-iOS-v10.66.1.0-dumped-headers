//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PendingNetworkRequest;
@protocol SCSnapAdsNetworkAdapter;

@interface SCSnapAdsSerializingNetworkManager : NSObject
{
    id <SCSnapAdsNetworkAdapter> _networkAdapter;
    NSMutableArray *_pendingRequests;
    PendingNetworkRequest *_activeRequest;
}

- (void).cxx_destruct;
- (void)emitNextRequest;
- (id)initWithNetworkAdapter:(id)arg1;
- (void)onUserLogout;
- (void)submit:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end
