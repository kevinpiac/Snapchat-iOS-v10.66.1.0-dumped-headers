//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUriServiceProviderRouteHandler-Protocol.h"
#import "SCSceneIntelligenceListener-Protocol.h"

@class LSAUriRequest, NSString, NSUUID;
@protocol SCFeatureSceneIntelligence;

@interface SCLensUriServiceSceneIntelligenceHandler : NSObject <SCSceneIntelligenceListener, SCLensUriServiceProviderRouteHandler>
{
    id <SCFeatureSceneIntelligence> _sceneIntelligence;
    NSUUID *_sceneIntelligenceToken;
    LSAUriRequest *_request;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSceneIntelligence:(id)arg1;
- (void)sceneIntelligenceController:(id)arg1 request:(id)arg2 failedWithError:(id)arg3;
- (void)sceneIntelligenceController:(id)arg1 request:(id)arg2 receivedResponse:(id)arg3;
- (void)sceneIntelligenceController:(id)arg1 willProcessRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
