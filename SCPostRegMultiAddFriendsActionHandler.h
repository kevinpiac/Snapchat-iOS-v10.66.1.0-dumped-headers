//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLazy;

@interface SCPostRegMultiAddFriendsActionHandler : NSObject <SCTraceEnabled, SCActionHandling>
{
    SCLazy *_postRegAddFriendsTracker;
    SCLazy *_snapchattersDataMutator;
}

- (void).cxx_destruct;
- (void)_performMultiAddFriends;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSnapchattersDataMutator:(id)arg1 postRegAddFriendsTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

