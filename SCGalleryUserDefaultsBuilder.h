//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCGalleryUserDefaultsBuilder : NSObject
{
    NSString *_objectID;
    _Bool _completedImportFromCameraRoll;
    _Bool _didInitialCloudSync;
    _Bool _dismissedImportButtonBelowSnaps;
    _Bool _displayedCameraRollTabIntroPopup;
    _Bool _displayedInitialCreateStoryPopup;
    _Bool _displayedInitialNeedsPhotoAccessPopup;
    _Bool _displayedPostLongVideoToStoryPopup;
    _Bool _displayedSaveOptionPrompt;
    NSDate *_latestAckedBackupErrorTime;
    NSString *_readFeaturedStoryIds;
    NSString *_viewedFeaturedStoryIds;
}

+ (id)withGalleryUserDefaults:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCompletedImportFromCameraRoll:(_Bool)arg1;
- (id)setDidInitialCloudSync:(_Bool)arg1;
- (id)setDismissedImportButtonBelowSnaps:(_Bool)arg1;
- (id)setDisplayedCameraRollTabIntroPopup:(_Bool)arg1;
- (id)setDisplayedInitialCreateStoryPopup:(_Bool)arg1;
- (id)setDisplayedInitialNeedsPhotoAccessPopup:(_Bool)arg1;
- (id)setDisplayedPostLongVideoToStoryPopup:(_Bool)arg1;
- (id)setDisplayedSaveOptionPrompt:(_Bool)arg1;
- (id)setLatestAckedBackupErrorTime:(id)arg1;
- (id)setObjectID:(id)arg1;
- (id)setReadFeaturedStoryIds:(id)arg1;
- (id)setViewedFeaturedStoryIds:(id)arg1;

@end

