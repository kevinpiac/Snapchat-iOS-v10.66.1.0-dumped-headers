//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer, SCSessionRequestManager, SCUserSession;

@interface SCSnapKitAppStateQueryCoordinator : NSObject
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)_fetchConnectionsWithSnapToken:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchAppStatesAndExperimentsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;

@end
