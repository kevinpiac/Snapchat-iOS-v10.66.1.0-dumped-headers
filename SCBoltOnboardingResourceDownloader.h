//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnboardingResourceDownloader-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLazy;

@interface SCBoltOnboardingResourceDownloader : NSObject <SCTraceEnabled, SCOnboardingResourceDownloader>
{
    SCLazy *_contentDeliver;
}

- (void).cxx_destruct;
- (id)_downloadRequestForResource:(id)arg1;
- (void)_registerIfRequiredAndRetriveResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_retrieveResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_unzipResource:(id)arg1 fromResult:(id)arg2;
- (id)_zipEntriesFromDirectory:(id)arg1;
- (void)download:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAndUnzip:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAndUnzipAsImages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadImage:(id)arg1 comletion:(CDUnknownBlockType)arg2;
- (id)downloadImageFuture:(id)arg1;
- (id)initWithContentDelivery:(id)arg1;
- (void)prefetch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
