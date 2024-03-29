//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBackgroundPrefetchProtocol-Protocol.h"

@class NSString, SCLazy;

@interface SCBackgroundRetrySignalCollector : NSObject <SCBackgroundPrefetchProtocol>
{
    SCLazy *_retrySignalAnnouncerLazy;
}

- (void).cxx_destruct;
- (void)backgroundPrefetchMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRetrySignalAnnouncerLazy:(id)arg1;
- (id)name;
- (unsigned long long)prefetchIntervalInSeconds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

