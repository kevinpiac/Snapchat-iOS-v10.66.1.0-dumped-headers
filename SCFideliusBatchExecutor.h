//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, SCUserSession;
@protocol SCPerforming;

@interface SCFideliusBatchExecutor : NSObject
{
    SCUserSession *_userSession;
    NSMutableArray *_toSubmit;
    unsigned long long _backgroundTask;
    NSTimer *_timer;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (id)_endpoint;
- (CDUnknownBlockType)_failureCallback;
- (void)_makeRequest;
- (long long)_maxRetriesBatchSize;
- (double)_maxRetriesWaitTime;
- (void)_onRequestMade;
- (_Bool)_shouldDedup:(id)arg1;
- (CDUnknownBlockType)_successCallback;
- (id)_toSubmitToJson:(id)arg1;
- (void)addToQueue:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1 useFakePerformer:(_Bool)arg2;
- (void)makeRequest;
- (const char *)queueLabel;

@end

