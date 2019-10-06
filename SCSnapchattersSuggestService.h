//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;

@interface SCSnapchattersSuggestService : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)_submitRequestToSuggestFriendEndpoint:(id)arg1 parameters:(id)arg2 callbackQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fetchSuggestionWithIsPrefetchForNotification:(_Bool)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)hideAllSuggestionWithPlacement:(long long)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)hideSuggestedSnapchatter:(id)arg1 placement:(long long)arg2 callbackQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithSessionRequestManager:(id)arg1;

@end
