//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

@class NSString;

@interface SCOperaPerfTestsLogger : SCOperaPlaylistEventTrackerPlugin
{
    NSString *_currentDisplayingPageId;
    double _eventStartTime;
}

- (void).cxx_destruct;
- (void)_logEndEvent:(id)arg1 pageID:(id)arg2 mediaType:(id)arg3 pageType:(id)arg4;
- (void)_startTrackingEventWithPageID:(id)arg1;
- (id)init;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)setPlaylistItemController:(id)arg1;

@end

