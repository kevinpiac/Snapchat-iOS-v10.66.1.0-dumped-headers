//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol LSAExperimentProviderProtocol, SCCrashedLensIdProvider, SCLensCrashLoggerProtocol, SCLensCrashLoggerStoreProtocol, SCLensSDKLogLevelProviderProtocol, SCLensTraceLoggerProtocol;

@protocol SCLensProcessingCoreResourcesFactoryProtocol <NSObject>
- (id <SCLensCrashLoggerStoreProtocol>)lensCrashLoggerStore;
- (id <SCLensCrashLoggerProtocol>)lensCrashLoggerWithCrashedLensIdProvider:(id <SCCrashedLensIdProvider>)arg1;
- (id <LSAExperimentProviderProtocol>)lensExperimentProvider;
- (id <SCLensSDKLogLevelProviderProtocol>)lensSDKLogLevelProvider;
- (id <SCLensTraceLoggerProtocol>)traceLoger;
@end

