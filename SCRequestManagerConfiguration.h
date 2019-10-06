//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCConnectionClassManagerV2Listener-Protocol.h"

@class NSString;

@interface SCRequestManagerConfiguration : NSObject <SCConnectionClassManagerV2Listener>
{
    unsigned long long _maxLargeRequests;
    unsigned long long _maxLargeRequestsFromSingleContext;
    unsigned long long _maxSmallRequests;
    unsigned long long _maxSmallRequestsForMap;
    unsigned long long _maxSmallRequestsForCognac;
    unsigned long long _maxOutOfContextLargeRequests;
    unsigned long long _maxLensRequests;
    unsigned long long _maxOutOfContextSmallRequests;
    unsigned long long _maxBatchSmallRequests;
}

+ (id)shared;
- (void)_updateRequestManagerSettingsV2:(id)arg1;
- (void)dealloc;
- (void)downloadConnectionClassDidChange:(id)arg1;
- (id)init;
@property unsigned long long maxBatchSmallRequests; // @synthesize maxBatchSmallRequests=_maxBatchSmallRequests;
@property unsigned long long maxLargeRequests; // @synthesize maxLargeRequests=_maxLargeRequests;
@property unsigned long long maxLargeRequestsFromSingleContext; // @synthesize maxLargeRequestsFromSingleContext=_maxLargeRequestsFromSingleContext;
@property unsigned long long maxLensRequests; // @synthesize maxLensRequests=_maxLensRequests;
@property unsigned long long maxOutOfContextLargeRequests; // @synthesize maxOutOfContextLargeRequests=_maxOutOfContextLargeRequests;
@property(readonly) unsigned long long maxOutOfContextSmallRequests; // @synthesize maxOutOfContextSmallRequests=_maxOutOfContextSmallRequests;
@property unsigned long long maxSmallRequests; // @synthesize maxSmallRequests=_maxSmallRequests;
@property(readonly) unsigned long long maxSmallRequestsForCognac; // @synthesize maxSmallRequestsForCognac=_maxSmallRequestsForCognac;
@property(readonly) unsigned long long maxSmallRequestsForMap; // @synthesize maxSmallRequestsForMap=_maxSmallRequestsForMap;
- (void)uploadConnectionClassDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

