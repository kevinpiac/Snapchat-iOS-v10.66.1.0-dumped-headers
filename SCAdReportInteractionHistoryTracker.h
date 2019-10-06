//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SCAdReportInteractionHistoryTracker : NSObject <SCUserSessionScoped>
{
    NSMutableDictionary *_adIdentifierToReportTrackInfoMap;
}

- (void).cxx_destruct;
- (id)adReportTrackInfoForAdIdentifier:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)reportAd:(id)arg1 adFlagged:(_Bool)arg2 adFlaggedReason:(id)arg3 adFlaggedNote:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
