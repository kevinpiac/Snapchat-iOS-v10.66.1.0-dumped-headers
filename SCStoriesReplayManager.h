//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, SCEventListenerAnnouncer, SCQueuePerformer;

@interface SCStoriesReplayManager : NSObject <SCEventAnnouncing>
{
    NSSet *_playedStoriesIdentifiers;
    NSMutableDictionary *_usernameToStorySnapIdMapping;
    SCQueuePerformer *_performer;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announcePlayedStoriesUpdate;
- (void)addIdentifierToPlayedStories:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clearAll;
- (void)clearPlayedStories;
- (id)getFirstStorySnapIdToPlay:(id)arg1;
- (id)init;
- (id)playedStoriesIdentifiers;
- (void)removeListener:(id)arg1;
- (void)setFirstStorySnapIdToPlay:(id)arg1 friendStoriesUsername:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

