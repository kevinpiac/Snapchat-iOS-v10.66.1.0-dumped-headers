//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGalleryLagunaStoryStatusObserver;

@protocol SCGalleryLagunaStoryStatusObserverDelegate <NSObject>
- (void)storyLoadingStatusObserver:(SCGalleryLagunaStoryStatusObserver *)arg1 didUpdateContentLoadingProgress:(double)arg2 numberTransferring:(unsigned long long)arg3 currentlyTransferringContentProgress:(double)arg4;
- (void)storyLoadingStatusObserver:(SCGalleryLagunaStoryStatusObserver *)arg1 didUpdateContentLoadingStatus:(long long)arg2;
@end

