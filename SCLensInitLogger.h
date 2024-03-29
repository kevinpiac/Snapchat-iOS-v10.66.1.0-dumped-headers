//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensPerformanceLogger-Protocol.h"

@class NSString, SCLensInitLoggerListenerAnnouncer, SCLogger;

@interface SCLensInitLogger : NSObject <SCLensPerformanceLogger>
{
    SCLensInitLoggerListenerAnnouncer *_announcer;
    SCLogger *_logger;
}

+ (id)_stateNameFromCoreState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_logEvent:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

