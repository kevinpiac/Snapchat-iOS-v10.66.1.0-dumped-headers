//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTodayWidgetService-Protocol.h"

@class NSOperationQueue, NSString, SCLazy;

@interface SCTodayWidgetService : NSObject <SCSnapchattersDataRequestListener, SCTodayWidgetService>
{
    NSString *_currentUserId;
    SCLazy *_bitmojiSelfieFetcher;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_sharedUserDefaults;
    SCLazy *_userTrackedLogger;
    CDUnknownBlockType _widgetController;
    NSString *_widgetBundleIdentifier;
    NSOperationQueue *_workerQueue;
    _Bool _visible;
}

- (void).cxx_destruct;
- (void)_checkForFirstRun;
- (void)_clearWidgetFriendsData;
- (void)_disableTodayWidget;
- (void)_enableTodayWidget;
- (void)_friendListUpdated;
- (void)_logWidgetAdded;
- (void)_logWidgetViewed:(long long)arg1;
- (void)_logWidgetViewedIfApplicable;
- (void)_setWidgetVisibility:(_Bool)arg1;
- (void)_updateWidgetData;
- (void)_updateWidgetDataWithSnapchatters:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithCurrentUserId:(id)arg1 bitmojiSelfieFetcher:(id)arg2 snapchattersDataFetcher:(id)arg3 snapchattersDataTracker:(id)arg4 sharedUserDefaults:(id)arg5 userTrackedLogger:(id)arg6 widgetController:(CDUnknownBlockType)arg7;
- (void)invalidate;
- (void)logDeeplinkAction:(long long)arg1;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

