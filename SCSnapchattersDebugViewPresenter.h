//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCSnapchattersDebugViewPresenting-Protocol.h"

@class NSString, SCLazy;

@interface SCSnapchattersDebugViewPresenter : NSObject <SCSnapchattersDataRequestListener, SCSnapchattersDebugViewPresenting>
{
    SCLazy *_snapchattersDataTracker;
}

- (void).cxx_destruct;
- (void)_showFriendingDebugInfoWithAction:(id)arg1 snapchatter:(id)arg2 addSource:(long long)arg3 placement:(long long)arg4 index:(long long)arg5;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithSnapchattersDataTracker:(id)arg1;
- (void)turnOffDebugView;
- (void)turnOnDebugView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

