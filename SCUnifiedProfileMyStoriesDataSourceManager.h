//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SCUnifiedProfileMyStoriesDataSourceManager : NSObject
{
    NSDictionary *_storyDataSourceCollection;
}

- (void).cxx_destruct;
- (void)addUpdateListener:(id)arg1 storyIdentifier:(id)arg2;
- (long long)autosaveStoryStatusForId:(id)arg1;
- (_Bool)canDeleteStoryForStoryId:(id)arg1;
- (_Bool)canSaveStoryForStoryId:(id)arg1;
- (_Bool)canStoryAutosaveForStoryId:(id)arg1;
- (id)dataSourceForId:(id)arg1;
- (id)init;
- (id)myStoriesForId:(id)arg1;
- (void)registerStoryDataSource:(id)arg1 storyIdentifier:(id)arg2;
- (void)updateAutosaveStoryToggleStatus:(long long)arg1 storyIdentifier:(id)arg2;

@end

