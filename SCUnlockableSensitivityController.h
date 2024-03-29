//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSDate, NSString;

@interface SCUnlockableSensitivityController : NSObject <NSCoding, SCUserSessionScoped>
{
    NSDate *_lastProcessedLowSensitivityResponse;
    NSDate *_lastProcessedLowSensitivityRequest;
    NSDate *_lastProcessedHighSensitivityRequest;
}

+ (id)_gtqSensitivityPath;
+ (void)removeSavedState;
- (void).cxx_destruct;
- (id)_dateForTimestamp:(long long)arg1;
- (_Bool)_shouldRequestLowSensitivityWithExpiry:(double)arg1;
- (id)_stringFromDate:(id)arg1;
- (void)_touchTimestamp:(long long)arg1 date:(id)arg2;
- (void)addObserver;
- (void)appDidEnterBackground;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchSensitivitySettings;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)logSensitivityLoaded;
- (void)markResponseSensitivityProcessed:(long long)arg1 requestTimestamp:(id)arg2;
- (_Bool)shouldProcessResponseForSensitivity:(long long)arg1 requestTimestamp:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

