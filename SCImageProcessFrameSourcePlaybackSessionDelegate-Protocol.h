//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCImageProcessVideoPlaybackSession;
@protocol SCFrameSource;

@protocol SCImageProcessFrameSourcePlaybackSessionDelegate
- (void)scImageProcessVideoPlaybackSession:(SCImageProcessVideoPlaybackSession *)arg1 didChangeFromSource:(id <SCFrameSource>)arg2 snapIndex:(long long)arg3 toSource:(id <SCFrameSource>)arg4 snapIndex:(long long)arg5;
- (void)scImageProcessVideoPlaybackSession:(SCImageProcessVideoPlaybackSession *)arg1 didLoadFrameSource:(id <SCFrameSource>)arg2;
- (void)scImageProcessVideoPlaybackSession:(SCImageProcessVideoPlaybackSession *)arg1 didPlayToSnapIndex:(long long)arg2 lastPlayedSnapIndex:(long long)arg3;
- (void)scImageProcessVideoPlaybackSession:(SCImageProcessVideoPlaybackSession *)arg1 willLoopSource:(id <SCFrameSource>)arg2;
@end

