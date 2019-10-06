//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreloadListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class FBKVOController, NSString;

@interface SCStoryLoader : NSObject <SCPreloadListener, SCTraceEnabled>
{
    FBKVOController *_observeController;
}

- (void).cxx_destruct;
- (void)addObservers;
- (void)attemptAutoLoadMyStories;
- (void)dealloc;
- (void)downloadSingleStory:(id)arg1 inFriendStories:(id)arg2;
- (void)forceRedownloadStory:(id)arg1 friendStories:(id)arg2 dueToError:(id)arg3;
- (id)init;
- (void)loadStory:(id)arg1 numberOfSnaps:(unsigned long long)arg2 viewingType:(long long)arg3 loadContext:(long long)arg4 userInitiated:(_Bool)arg5 viewLocation:(long long)arg6;
@property(retain, nonatomic) FBKVOController *observeController; // @synthesize observeController=_observeController;
- (void)preloadController:(id)arg1 preloadModeDidChange:(long long)arg2;
- (void)preloadControllerDidLoadFromUserSession;
- (void)removeObservers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
