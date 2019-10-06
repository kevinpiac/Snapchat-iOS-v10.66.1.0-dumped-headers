//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSAAnalyticsListener-Protocol.h"

@class LSAAnalyticsComponentListenerAnnouncer, NSString;

@interface LSAAnalyticsComponent : LSABaseComponent <LSAAnalyticsListener>
{
    LSAAnalyticsComponentListenerAnnouncer *_analyticsComponentAnnouncer;
    struct shared_ptr<LSAAnalyticsDelegateWrapper> _analyticsDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)didChangeContent:(id)arg1;
- (void)didPrepareEffectAnalyticEventsForEffectId:(id)arg1 analyticsManager:(struct AnalyticsManager *)arg2;
- (void)didPreparePerformanceReport:(id)arg1;
- (id)initWithPerformer:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
