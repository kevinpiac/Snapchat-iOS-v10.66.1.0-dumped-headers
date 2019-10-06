//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"

@class NSString, SCDiscoverFeedSectionKey, SCEventListenerAnnouncer;

@interface SCDiscoverFeedActionSheetNotificationStatusManager : NSObject <SCEventAnnouncing>
{
    SCEventListenerAnnouncer *_announcer;
    unsigned long long _notificationState;
    unsigned long long _storyDedupeFp;
    SCDiscoverFeedSectionKey *_sectionKey;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (id)initWithNotificationState:(unsigned long long)arg1 storyDedupeFp:(unsigned long long)arg2 sectionKey:(id)arg3;
- (unsigned long long)notificationStateForStoryDedupeFp:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
- (void)updateStoryDedupeFp:(unsigned long long)arg1 notificationState:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

