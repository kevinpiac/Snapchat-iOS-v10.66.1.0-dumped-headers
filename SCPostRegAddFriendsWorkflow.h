//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPostRegAddFriendsPageDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCAddFriendsWorkflowDelegate, SCPostRegAddFriendsRouter;

@interface SCPostRegAddFriendsWorkflow : NSObject <SCTraceEnabled, SCPostRegAddFriendsPageDelegate>
{
    id <SCPostRegAddFriendsRouter> _router;
    id <SCAddFriendsWorkflowDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)beginWorkflow;
- (id)initWithRouter:(id)arg1 delegate:(id)arg2;
- (void)postRegAddFriendsContinued;
- (void)postRegAddFriendsSkipped;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
