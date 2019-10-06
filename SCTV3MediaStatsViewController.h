//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3SessionWrapperListener-Protocol.h"

@class NSString, SCTV3DebugLogsParser, UILabel, UIView;

@interface SCTV3MediaStatsViewController : NSObject <SCTV3SessionWrapperListener>
{
    UIView *_container;
    UILabel *_upLabel;
    UILabel *_downLabel;
    SCTV3DebugLogsParser *_upParser;
    SCTV3DebugLogsParser *_downParser;
}

- (void).cxx_destruct;
- (void)_initIfNeeded;
- (id)debugView;
- (void)processLogs:(id)arg1;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

