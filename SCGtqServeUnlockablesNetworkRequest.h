//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGtqNetworkRequest.h"

@class SCULGtqServeRequest;

@interface SCGtqServeUnlockablesNetworkRequest : SCGtqNetworkRequest
{
    SCULGtqServeRequest *_serveRequest;
}

- (void).cxx_destruct;
- (id)initWithGtqServeRequest:(id)arg1 host:(id)arg2 path:(id)arg3 referenceId:(id)arg4 additionalHTTPHeaders:(id)arg5 useGzipRequestCompression:(_Bool)arg6;
- (id)key;
- (id)toSCRequest;

@end

