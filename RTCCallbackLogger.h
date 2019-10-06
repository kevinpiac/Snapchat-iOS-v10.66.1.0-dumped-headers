//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTCCallbackLogger : NSObject
{
    _Bool _hasStarted;
    struct unique_ptr<CallbackLogSink, std::__1::default_delete<CallbackLogSink>> _logSink;
    long long _severity;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (int)rtcSeverity;
@property(nonatomic) long long severity; // @synthesize severity=_severity;
- (void)start:(CDUnknownBlockType)arg1;
- (void)stop;

@end

