//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, SCGCDBlockTimer;
@protocol SCPerforming;

@interface SCCollectionViewSectionDataProvidingScheduler : NSObject
{
    SCGCDBlockTimer *_updateTimer;
    NSMutableArray *_monitoringDataProviders;
    id <SCPerforming> _performer;
    NSMutableSet *_pendingDataUpdateSections;
}

- (void).cxx_destruct;
- (void)_forceUpdateAllSections;
- (_Bool)_hasLoadingDataProviders;
- (void)_monitorDataProvider:(id)arg1;
- (void)_scheduleSectionDataUpdate:(id)arg1;
- (id)init;
- (void)monitorDataProvider:(id)arg1;
- (void)scheduleSectionDataUpdate:(id)arg1;

@end

