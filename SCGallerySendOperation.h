//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCGallerySendConfiguration, SCQueuePerformer, SCUserSession;

@interface SCGallerySendOperation : NSObject <SCDataCoordinatorListener>
{
    SCGallerySendConfiguration *_config;
    SCQueuePerformer *_performer;
    SCUserSession *_userSession;
    _Bool _isSending;
    NSMutableArray *_itemsToSend;
    NSMutableDictionary *_clientIdToCompletion;
}

- (void).cxx_destruct;
- (void)_attemptToSmartShareItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fillInCommonParamsForEphemeralMedia:(id)arg1 fromItem:(id)arg2;
- (void)_monitorPostingStateChange:(id)arg1;
- (void)_monitorPostingStateChangeWithClientId:(id)arg1 postingState:(long long)arg2;
- (void)_postStoryForItem:(id)arg1 ephemeralMedia:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_smartShareItem:(id)arg1 smartSharePackage:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_submitMediaSendSendTaskForEphemeralMedia:(id)arg1 item:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_uploadAndSendItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addItem:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithConfiguration:(id)arg1 userSession:(id)arg2;
- (void)sendWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

