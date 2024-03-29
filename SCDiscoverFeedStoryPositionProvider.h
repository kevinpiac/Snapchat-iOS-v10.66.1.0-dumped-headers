//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedStoryPositionProviding-Protocol.h"

@class NSString, SCDiscoverFeedDataStore, SCExperimentManager, SCFeatureSettingsManager;

@interface SCDiscoverFeedStoryPositionProvider : NSObject <SCDiscoverFeedStoryPositionProviding>
{
    SCDiscoverFeedDataStore *_dataStore;
    SCExperimentManager *_experimentManager;
    SCFeatureSettingsManager *_featureSettingsManager;
}

- (void).cxx_destruct;
- (id)initWithDataStore:(id)arg1 experimentManager:(id)arg2 featureSettingsManager:(id)arg3;
- (unsigned long long)itemIndexForStory:(id)arg1 inFeedType:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForSectionKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

