//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCVideoFrameDropCounter : NSObject
{
    long long _frameCount;
    CDStruct_1b6d18a9 _targetInterval;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _currentTime;
    unsigned long long _totalFrameDrop;
    unsigned long long _maxFrameDrop;
    _Bool _switchedCameraSinceLastFrame;
}

- (void)_logAndReportFrameDropIfNecessary:(unsigned long long)arg1;
- (void)didChangeCaptureDevicePosition;
- (id)initWithTargetFramerate:(double)arg1;
- (void)processFrameTime:(CDStruct_1b6d18a9)arg1;
- (id)toBlizzardEvent;
- (id)toDict;

@end
