//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCUnifiedProfileScreenCaptureMonitorDelegate;

@interface SCUnifiedProfileScreenCaptureMonitor : NSObject
{
    id <SCUnifiedProfileScreenCaptureMonitorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didScreenRecord;
- (void)_didScreenshot;
@property(nonatomic) __weak id <SCUnifiedProfileScreenCaptureMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startObservingScreenCapture;
- (void)stopObservingScreenCapture;

@end

