//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensCrashLoggerStoreProtocol-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, NSUserDefaults;

@interface SCLensCrashLoggerStore : NSObject <SCTraceEnabled, SCLensCrashLoggerStoreProtocol>
{
    NSUserDefaults *_userDefaults;
}

+ (id)defaultCrashLoggerStore;
- (void).cxx_destruct;
- (void)clearLastSelectedLensId;
- (id)initWithUserDefaults:(id)arg1;
- (id)lastSelectedLensId;
- (void)lensEffectActivator:(id)arg1 didFailToApplyLensAtTime:(double)arg2;
- (void)lensEffectActivator:(id)arg1 didStartApplyingLens:(id)arg2 atTime:(double)arg3;
- (void)lensEffectActivator:(id)arg1 didSuccessfullyApplyLensAtTime:(double)arg2;
- (void)storeSelectedLensId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

