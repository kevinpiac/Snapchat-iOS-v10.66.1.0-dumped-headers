//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, WKWebView;
@protocol SCWkWebViewWrapperDelegate;

@interface SCWkWebViewWrapper : NSObject <WKNavigationDelegate>
{
    WKWebView *_wkWebView;
    id <SCWkWebViewWrapperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCWkWebViewWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithConfigDict:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)tearDown;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
