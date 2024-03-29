//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLogger;

@interface SCMapGestureLogger : NSObject
{
    SCLogger *_logger;
    unsigned long long _mapSessionId;
    unsigned long long _singleTapNumber;
    unsigned long long _doubleTapNumber;
    unsigned long long _pinchNumber;
    unsigned long long _panNumber;
    unsigned long long _zoomSliderNumber;
    unsigned long long _oneFingerZoomNumber;
    unsigned long long _twoFingerTapNumber;
}

- (void).cxx_destruct;
- (void)_resetTracking;
- (void)flush;
- (id)initWithLogger:(id)arg1 mapSessionId:(unsigned long long)arg2;
- (void)trackDoubleTapGesture;
- (void)trackOneFingerZoom;
- (void)trackPanGesture;
- (void)trackPinchGesture;
- (void)trackTapGesture;
- (void)trackTwoFingerTap;
- (void)trackZoomSliderUse;

@end

