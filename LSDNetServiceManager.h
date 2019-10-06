//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class NSMutableArray, NSNetServiceBrowser, NSString;
@protocol LSDNetServiceManagerDelegate;

@interface LSDNetServiceManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetServiceBrowser *_browser;
    NSMutableArray *_lensSyncServices;
    id <LSDNetServiceManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LSDNetServiceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)searchForSyncServer;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

