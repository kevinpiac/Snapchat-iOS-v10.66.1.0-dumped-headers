//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBandwidthEstimatorListener-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;

@interface SCBandwidthSignalCollector : NSObject <SCBandwidthEstimatorListener>
{
    SCQueuePerformer *_performer;
    SCLazy *_retrySignalAnnouncerLazy;
    long long _uploadBandwidth;
    long long _minRequiredBandwidth;
}

- (void).cxx_destruct;
- (void)downloadBandwidthDidChange:(long long)arg1;
- (id)initWithRetrySignalAnnouncerLazy:(id)arg1 minRequiredBandwidth:(long long)arg2;
- (void)uploadBandwidthDidChange:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

