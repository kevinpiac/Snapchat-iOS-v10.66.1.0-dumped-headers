//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacOperaSession-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSString, SCCognacAppDataModel, SCCognacOperaDataSource, WKWebViewJavascriptBridge;

@interface SCCognacOperaPremiumContentsSession : NSObject <SCEventListener, SCCognacOperaSession>
{
    WKWebViewJavascriptBridge *_bridge;
    SCCognacAppDataModel *_appDataModel;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
- (void).cxx_destruct;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)endSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)pauseSession;
- (id)registeredWVJBHandlerNameToHandler;
- (void)resumeSession;
- (void)startSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

