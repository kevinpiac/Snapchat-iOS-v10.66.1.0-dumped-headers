//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessVideoPlaybackSessionListener-Protocol.h"

@class NSString;

@interface SCImageProcessVideoPlaybackSessionListenerAnnouncer : NSObject <SCImageProcessVideoPlaybackSessionListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCImageProcessVideoPlaybackSessionListener>, std::__1::allocator<__weak id<SCImageProcessVideoPlaybackSessionListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removeListener:(id)arg1;
- (void)videoPlaybackSession:(id)arg1 didRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlaybackSession:(id)arg1 willRenderFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)videoPlaybackSessionPlayerItemBufferDidBecomeEmpty:(id)arg1;
- (void)videoPlaybackSessionPlayerItemLikelyToKeepUp:(id)arg1;
- (void)videoPlaybackSessionWillLoopVideo:(id)arg1 currentPlayerTime:(CDStruct_1b6d18a9)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

