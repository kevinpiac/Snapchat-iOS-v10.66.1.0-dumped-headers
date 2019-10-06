//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class LSATouchProcessingComponent, LSATouchProcessingController, NSMutableArray, NSMutableSet, UITouch;

@interface LSATouchProcessingRecognizer : UIGestureRecognizer
{
    NSMutableSet *_activeTouches;
    LSATouchProcessingController *_controller;
    LSATouchProcessingComponent *_touchProcessingComponent;
    _Bool _ignoreMultipleTouches;
    _Bool _printDebugLogs;
    UITouch *_firstTouch;
    double _touchProcessingDelay;
    _Bool _ignoreTouches;
    CDUnknownBlockType _startTouchProcessingBlock;
    NSMutableArray *_queuedTouches;
}

- (void).cxx_destruct;
- (void)cancelDelayedTouchBeganIfNecessary;
- (id)initWithParentController:(id)arg1 touchProcessingComponent:(id)arg2 ignoreMultipleTouches:(_Bool)arg3 touchProcessingDelay:(double)arg4 printDebugLogs:(_Bool)arg5;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

