//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class SCCStoryPlayerPlaybackOptions, SCComposerRef;

@protocol SCCStoryPlayerPlaying <NSObject, SCComposerMarshallable>
- (_Bool)isPresenting;
- (void)playItemsWithItemProvider:(void (^)(void (^)(SCCStoryPlayerItems *, NSString *)))arg1 baseView:(SCComposerRef *)arg2 options:(SCCStoryPlayerPlaybackOptions *)arg3 callback:(void (^)(NSString *))arg4;
@end

