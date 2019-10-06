//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer, SCSessionRequestManager, SCUserSession;

@interface SCSnapKitAppFeatureToggleRequestCoordinator : NSObject
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (id)_createFeatureToggleRequestForFeature:(int)arg1 featureOn:(_Bool)arg2 applicationId:(id)arg3 snapToken:(id)arg4;
- (void)_sendAppFeatureToggleRequestForFeature:(int)arg1 featureOn:(_Bool)arg2 applicationId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 snapToken:(id)arg6;
- (id)initWithUserSession:(id)arg1;
- (void)sendAppFeatureToggleRequestForFeature:(int)arg1 featureOn:(_Bool)arg2 applicationId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

