//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedCaptureDeviceFocusHandler-Protocol.h"

@class AVCaptureDevice, NSString;

@interface SCManagedCaptureDeviceAutoFocusHandler : NSObject <SCManagedCaptureDeviceFocusHandler>
{
    _Bool _isContinuousAutofocus;
    _Bool _isFocusLock;
    AVCaptureDevice *_device;
    struct CGPoint _focusPointOfInterest;
}

- (void).cxx_destruct;
- (void)continuousAutofocus;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(nonatomic) struct CGPoint focusPointOfInterest; // @synthesize focusPointOfInterest=_focusPointOfInterest;
- (id)initWithDevice:(id)arg1;
@property(nonatomic) _Bool isContinuousAutofocus; // @synthesize isContinuousAutofocus=_isContinuousAutofocus;
@property(nonatomic) _Bool isFocusLock; // @synthesize isFocusLock=_isFocusLock;
- (void)setAutofocusPointOfInterest:(struct CGPoint)arg1;
- (void)setFocusLock:(_Bool)arg1;
- (void)setSmoothFocus:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
