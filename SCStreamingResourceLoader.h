//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingResourceLoaderDelegateCompletionHandler-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCExperimentManager, SCObservable, SCPublishSubject, SCQueuePerformer, SCSessionRequestManager;
@protocol SCStreamingResponseCaching;

@interface SCStreamingResourceLoader : NSObject <SCStreamingResourceLoaderDelegateCompletionHandler>
{
    NSMutableDictionary *_resourceLoaderMap;
    NSMutableArray *_assetList;
    SCQueuePerformer *_assetListPerformer;
    SCSessionRequestManager *_requestManager;
    id <SCStreamingResponseCaching> _cache;
    SCPublishSubject *_resourceLoaderErrorObservable;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)assetWithURLProvider:(id)arg1;
@property(readonly, nonatomic) id <SCStreamingResponseCaching> cache; // @synthesize cache=_cache;
- (id)initWithCache:(id)arg1 requestManager:(id)arg2 experimentManager:(id)arg3;
- (void)removeAll;
- (void)removeAssetWithURL:(id)arg1;
- (void)requestLoaderDelegateDidFinish:(id)arg1 urlProvider:(id)arg2 withError:(id)arg3;
@property(readonly, nonatomic) SCObservable *resourceLoaderErrorObservable; // @synthesize resourceLoaderErrorObservable=_resourceLoaderErrorObservable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
