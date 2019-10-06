//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedStillImageCapturerDelegate-Protocol.h"

@class NSString, SCCaptureResource;

@interface SCManagedStillImageCapturerHandler : NSObject <SCManagedStillImageCapturerDelegate>
{
    SCCaptureResource *_captureResource;
}

- (void).cxx_destruct;
- (id)initWithCaptureResource:(id)arg1;
- (void)managedStillImageCapturerDidCapturePhoto:(id)arg1;
- (_Bool)managedStillImageCapturerIsUnderDeviceMotion:(id)arg1;
- (_Bool)managedStillImageCapturerShouldProcessFileInput:(id)arg1;
- (void)managedStillImageCapturerWillCapturePhoto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

