//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol POPAnimatorDelegate;

@interface POPAnimator : NSObject
{
    CADisplayLink *_displayLink;
    list_20bec4f3 _list;
    struct __CFDictionary *_dict;
    NSMutableArray *_observers;
    list_20bec4f3 _pendingList;
    struct __CFRunLoopObserver *_pendingListObserver;
    double _slowMotionStartTime;
    double _slowMotionLastTime;
    double _slowMotionAccumulator;
    double _beginTime;
    int _lock;
    _Bool _disableDisplayLink;
    id <POPAnimatorDelegate> _delegate;
}

+ (id)sharedAnimator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearPendingListObserver;
- (double)_currentRenderTime;
- (void)_processPendingList;
- (void)_renderTime:(double)arg1 item:(shared_ptr_1553c9f8)arg2;
- (void)_renderTime:(double)arg1 items:(list_20bec4f3)arg2;
- (void)_scheduleProcessPendingList;
- (void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3;
- (void)addObserver:(id)arg1;
- (id)animationForObject:(id)arg1 key:(id)arg2;
- (id)animationKeysForObject:(id)arg1;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)dealloc;
@property(nonatomic) __weak id <POPAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableDisplayLink; // @synthesize disableDisplayLink=_disableDisplayLink;
- (id)init;
- (id)observers;
@property(readonly, nonatomic) double refreshPeriod;
- (void)removeAllAnimationsForObject:(id)arg1;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(_Bool)arg3;
- (void)removeObserver:(id)arg1;
- (void)render;
- (void)renderTime:(double)arg1;

@end

