//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMapLoggerSession, SCMapStatusStore, SCStopwatch;
@protocol SCMapPeopleFriendsProvider;

@interface SCMapExploreLogger : NSObject
{
    SCMapStatusStore *_statusStore;
    SCMapLoggerSession *_session;
    id <SCMapPeopleFriendsProvider> _mapPeopleProvider;
    SCStopwatch *_stopwatch;
}

- (void).cxx_destruct;
- (void)exploreDidCloseWithExitEvent:(long long)arg1 availableItemCount:(unsigned long long)arg2 readItemCount:(unsigned long long)arg3;
- (void)exploreDidDeleteMyStatus:(id)arg1;
- (void)exploreDidOpenWithSource:(long long)arg1 availableItemCount:(unsigned long long)arg2 unreadItemCount:(unsigned long long)arg3 visibleItem:(id)arg4;
- (void)exploreDidTakeScreenshotOfItem:(id)arg1;
- (void)exploreDidViewItem:(id)arg1;
- (id)initWithMapPeopleProvider:(id)arg1 loggerSession:(id)arg2 statusStore:(id)arg3;

@end
