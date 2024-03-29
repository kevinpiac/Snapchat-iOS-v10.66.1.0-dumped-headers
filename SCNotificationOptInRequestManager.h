//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCDiscoverFeedDataStore, SCSessionRequestManager;

@interface SCNotificationOptInRequestManager : NSObject
{
    SCDiscoverFeedDataStore *_dataStore;
    SCSessionRequestManager *_requestManager;
    NSString *_userId;
}

- (void).cxx_destruct;
- (void)_sendRequest:(id)arg1 story:(id)arg2 toState:(unsigned long long)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)_updateStoryInDataStore:(id)arg1 optedIn:(_Bool)arg2;
- (void)_updateStoryWithDedupeFp:(unsigned long long)arg1 toState:(unsigned long long)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)initWithCheetahDataStore:(id)arg1 requestManager:(id)arg2 userId:(id)arg3;
- (void)updatePublisherWithPublisherId:(long long)arg1 toState:(unsigned long long)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)updateStory:(id)arg1 toState:(unsigned long long)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)updateStoryWithDedupeFp:(unsigned long long)arg1 toState:(unsigned long long)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)updateUserWithUserId:(id)arg1 toState:(unsigned long long)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end

