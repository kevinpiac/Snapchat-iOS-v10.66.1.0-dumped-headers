//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LSAProfilingEngine : NSObject
{
}

+ (void)beginRuntimeReport;
+ (void)cpuFrameBegin;
+ (void)cpuFrameEnd;
+ (void)disableAllFilters;
+ (void)disableFilter:(id)arg1;
+ (void)enableAllFilters;
+ (void)enableFilter:(id)arg1;
+ (void)endRuntimeReport;
+ (void)endScope:(id)arg1 withFilter:(id)arg2;
+ (void)endSession;
+ (void)frameIncrement;
+ (CDUnknownFunctionPointerType)getEndScope;
+ (CDUnknownFunctionPointerType)getStartScope;
+ (void)gpuFrameBegin;
+ (void)gpuFrameEnd;
+ (id)reportString;
+ (id)reportStringWithSessionId:(long long)arg1;
+ (void)setBackends:(int)arg1;
+ (void)startScope:(id)arg1 withFilter:(id)arg2;
+ (void)startSession;
+ (void)withSCTraceStart:(CDUnknownFunctionPointerType)arg1 withSCTraceEnd:(CDUnknownFunctionPointerType)arg2;

@end

