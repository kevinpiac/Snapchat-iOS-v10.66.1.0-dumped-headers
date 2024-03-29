//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaWebViewURLInterceptorDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SCBrowserNavigationPolicyDeciderDelegate, SCOperaWebViewURLInterceptor, SCWebBrowsingURLChecker;

@interface SCBrowserNavigationPolicyDecider : NSObject <SCOperaWebViewURLInterceptorDelegate>
{
    id <SCWebBrowsingURLChecker> _safeBrowsingChecker;
    id <SCOperaWebViewURLInterceptor> _urlInterceptor;
    NSMutableDictionary *_safeBrowsingCache;
    NSMutableDictionary *_safeBrowsingCacheExpirations;
    id <SCBrowserNavigationPolicyDeciderDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_cachedSafeBrowsingStatusForURL:(id)arg1;
- (long long)decidePolicyForRequest:(id)arg1 isWebViewFullyAppeared:(_Bool)arg2 isWebViewInitialPageLoad:(_Bool)arg3;
@property(nonatomic) __weak id <SCBrowserNavigationPolicyDeciderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchNavigationPolicyForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSafeBrowsingChecker:(id)arg1 urlInterceptor:(id)arg2 options:(long long)arg3;
- (void)operaWebViewURLInterceptorDidClickCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

