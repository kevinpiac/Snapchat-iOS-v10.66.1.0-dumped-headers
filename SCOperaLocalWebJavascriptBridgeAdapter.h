//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLocalWebJavascriptBridgeInlineVideoListener-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class NSString, SCOperaLocalWebJavascriptBridge;

@interface SCOperaLocalWebJavascriptBridgeAdapter : NSObject <WKScriptMessageHandler, SCOperaLocalWebJavascriptBridgeInlineVideoListener>
{
    SCOperaLocalWebJavascriptBridge *_bridge;
    CDUnknownBlockType _listener;
}

- (void).cxx_destruct;
- (id)initWithListener:(CDUnknownBlockType)arg1;
- (void)install:(id)arg1;
- (void)javascriptBridge:(id)arg1 didAddInlineVideoWithURL:(id)arg2 parameters:(id)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
