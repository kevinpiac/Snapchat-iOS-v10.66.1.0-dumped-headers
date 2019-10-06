//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerRankingAnalyticsEvent-Protocol.h"

@class NSString, SCDiscoverFeedStoryLoggingInfo, SCLensExplorerLensItemLoggingInfo;

@interface SCLensExplorerStoryViewEvent : NSObject <SCLensExplorerRankingAnalyticsEvent>
{
    SCLensExplorerLensItemLoggingInfo *_loggingInfo;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    long long _itemSource;
    long long _exitEvent;
}

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)eventName;
- (id)initWithLoggingInfo:(id)arg1 storyLoggingInfo:(id)arg2;
@property(readonly, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
- (double)totalMediaDuration;
- (void)updateDataIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
