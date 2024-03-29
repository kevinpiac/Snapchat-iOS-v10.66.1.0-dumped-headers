//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol SCLensCrashLoggerProtocol <NSObject>
- (void (^)(NSError *))defaultErrorHandlerWithSelector:(SEL)arg1;
- (void (^)(NSError *))handlerWithLensId:(NSString *)arg1 selector:(SEL)arg2;
- (void)logCrashError:(NSError *)arg1 lensId:(NSString *)arg2 selector:(SEL)arg3;
- (void)logCrashError:(NSError *)arg1 selector:(SEL)arg2;
@end

