//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCTerminateAppHelper : NSObject
{
}

+ (void)forceExitApp;
+ (_Bool)lastAppSessionDidManuallyTerminate;
+ (long long)lastAppSessionTerminationState;
+ (void)setTerminationState:(long long)arg1 synchronous:(_Bool)arg2;

@end

