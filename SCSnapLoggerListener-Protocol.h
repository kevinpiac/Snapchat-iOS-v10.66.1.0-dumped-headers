//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCADirectSnapSend, SCAGeofilterDirectSnapSend, SCSnapLogger;

@protocol SCSnapLoggerListener <NSObject>
- (void)snapLogger:(SCSnapLogger *)arg1 didLogDirectSnapEvent:(SCADirectSnapSend *)arg2;
- (void)snapLogger:(SCSnapLogger *)arg1 didLogGeofilterDirectSnapSendEvent:(SCAGeofilterDirectSnapSend *)arg2;
@end

