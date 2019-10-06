//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SCDiscoverFeedSectionCollapseCoordinating, SCPerforming;

@interface SCDiscoverFeedSectionCollapseCoordinatingManager : NSObject <SCDataCoordinatorListener, SCUpdateListener>
{
    NSMutableDictionary *_collapsedCoordinatorDictionary;
    id <SCDiscoverFeedSectionCollapseCoordinating> _collapseAllCoordinator;
    id <SCPerforming> _sectionDataUpdatePerformer;
}

- (void).cxx_destruct;
- (void)_addCollapseCoordinator:(id)arg1;
- (void)_collapseAllIfNecessary:(id)arg1;
- (void)_expandAllSections;
- (void)_expandSectionBasedOnSectionType:(id)arg1;
- (void)_updateCollapseState;
- (void)_updateCollapseStateBasedOnDataRequest:(id)arg1;
- (void)addCollapseCoordinator:(id)arg1;
- (id)collapsedAllSectionCoordinator;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)expandAllSections;
- (void)expandSectionBasedOnSectionType:(id)arg1;
- (id)init;
- (void)updateCollapseState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

