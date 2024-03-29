//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDeviceCheckTokenFetching-Protocol.h"

@class DCDevice, SCExperimentManager, SCPreferences, SCQueuePerformer;

@interface SCDeviceCheckFeature : NSObject <SCDeviceCheckTokenFetching>
{
    SCPreferences *_preferences;
    SCExperimentManager *_experimentManager;
    SCQueuePerformer *_workQueuePerformer;
    DCDevice *_currentDevice;
}

- (void).cxx_destruct;
- (void)_appleDeviceCheckTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_clearDeviceToken;
- (void)_generateDeviceTokenBlockWithCompletion:(CDUnknownBlockType)arg1;
- (id)_getDeviceToken;
- (void)_saveDeviceToken:(id)arg1;
@property(retain, nonatomic) DCDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
- (void)fetchDeviceTokenUsingCache:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDeviceTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)generateDeviceTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPreferences:(id)arg1 experimentManager:(id)arg2;
- (_Bool)isErrorDeviceCheckCode:(id)arg1;

@end

