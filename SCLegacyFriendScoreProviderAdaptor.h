//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyFriendScoreProvider-Protocol.h"

@class SCLazy, SCSessionRequestManager;

@interface SCLegacyFriendScoreProviderAdaptor : NSObject <SCLegacyFriendScoreProvider>
{
    SCLazy *_friends;
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)fetchScoreForFriend:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFriends:(id)arg1 sessionRequestManager:(id)arg2;

@end

