//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;

@interface SCAddFriendsEventLoggingService : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (id)initWithSessionRequestManager:(id)arg1;
- (void)sendSeenEventRequestForSuggestedSnapchatters:(id)arg1 addedSuggestedSnapchatters:(id)arg2 seenAddedMeSnapchatters:(id)arg3 addedAddedMeSnapchatters:(id)arg4 placement:(id)arg5 impressionId:(id)arg6 impressionTimeMs:(id)arg7;

@end

