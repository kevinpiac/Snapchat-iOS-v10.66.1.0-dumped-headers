//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, SCStickerPickerScrollPerformanceEvent;

@interface SCStickerPickerScrollPerformanceTracker : NSObject
{
    CADisplayLink *_displayLink;
    SCStickerPickerScrollPerformanceEvent *_currentEvent;
}

- (void).cxx_destruct;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_finishEvent;
- (void)dealloc;
- (void)didEndDecelerating;
- (void)didEndDraggingAndWillDecelerate:(_Bool)arg1;
- (id)initWithStickerCategoryType:(long long)arg1;
- (void)interrupt;
- (void)trackStickerPackID:(id)arg1;
- (void)willBeginScrolling;

@end
