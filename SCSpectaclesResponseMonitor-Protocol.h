//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSpectaclesResponseMessage;

@protocol SCSpectaclesResponseMonitor <NSObject>
- (void)handleResponse:(SCSpectaclesResponseMessage *)arg1;
- (long long)responseMonitorState;
@end
