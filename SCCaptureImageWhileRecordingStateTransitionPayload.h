//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCStateTransitionPayload.h"

@class SCImageCaptureConfiguration;

@interface SCCaptureImageWhileRecordingStateTransitionPayload : SCStateTransitionPayload
{
    SCImageCaptureConfiguration *_captureConfiguration;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) SCImageCaptureConfiguration *captureConfiguration; // @synthesize captureConfiguration=_captureConfiguration;
- (id)initWithFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 captureConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

