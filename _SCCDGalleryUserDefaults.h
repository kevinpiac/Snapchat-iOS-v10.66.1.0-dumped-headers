//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, SCCDGalleryProfile, SCCDGalleryUserDefaultsID;

@interface _SCCDGalleryUserDefaults : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property _Bool completedImportFromCameraRollValue;
@property _Bool didInitialCloudSyncValue;
@property _Bool dismissedImportButtonBelowSnapsValue;
@property _Bool displayedCameraRollTabIntroPopupValue;
@property _Bool displayedInitialCreateStoryPopupValue;
@property _Bool displayedInitialNeedsPhotoAccessPopupValue;
@property _Bool displayedPostLongVideoToStoryPopupValue;
@property _Bool displayedSaveOptionPromptValue;
@property(readonly, nonatomic) SCCDGalleryUserDefaultsID *objectID;
- (_Bool)primitiveCompletedImportFromCameraRollValue;
- (_Bool)primitiveDidInitialCloudSyncValue;
- (_Bool)primitiveDismissedImportButtonBelowSnapsValue;
- (_Bool)primitiveDisplayedCameraRollTabIntroPopupValue;
- (_Bool)primitiveDisplayedInitialCreateStoryPopupValue;
- (_Bool)primitiveDisplayedInitialNeedsPhotoAccessPopupValue;
- (_Bool)primitiveDisplayedPostLongVideoToStoryPopupValue;
- (_Bool)primitiveDisplayedSaveOptionPromptValue;
- (void)setPrimitiveCompletedImportFromCameraRollValue:(_Bool)arg1;
- (void)setPrimitiveDidInitialCloudSyncValue:(_Bool)arg1;
- (void)setPrimitiveDismissedImportButtonBelowSnapsValue:(_Bool)arg1;
- (void)setPrimitiveDisplayedCameraRollTabIntroPopupValue:(_Bool)arg1;
- (void)setPrimitiveDisplayedInitialCreateStoryPopupValue:(_Bool)arg1;
- (void)setPrimitiveDisplayedInitialNeedsPhotoAccessPopupValue:(_Bool)arg1;
- (void)setPrimitiveDisplayedPostLongVideoToStoryPopupValue:(_Bool)arg1;
- (void)setPrimitiveDisplayedSaveOptionPromptValue:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) NSNumber *completedImportFromCameraRoll; // @dynamic completedImportFromCameraRoll;
@property(retain, nonatomic) NSNumber *didInitialCloudSync; // @dynamic didInitialCloudSync;
@property(retain, nonatomic) NSNumber *dismissedImportButtonBelowSnaps; // @dynamic dismissedImportButtonBelowSnaps;
@property(retain, nonatomic) NSNumber *displayedCameraRollTabIntroPopup; // @dynamic displayedCameraRollTabIntroPopup;
@property(retain, nonatomic) NSNumber *displayedInitialCreateStoryPopup; // @dynamic displayedInitialCreateStoryPopup;
@property(retain, nonatomic) NSNumber *displayedInitialNeedsPhotoAccessPopup; // @dynamic displayedInitialNeedsPhotoAccessPopup;
@property(retain, nonatomic) NSNumber *displayedPostLongVideoToStoryPopup; // @dynamic displayedPostLongVideoToStoryPopup;
@property(retain, nonatomic) NSNumber *displayedSaveOptionPrompt; // @dynamic displayedSaveOptionPrompt;
@property(retain, nonatomic) NSDate *latestAckedBackupErrorTime; // @dynamic latestAckedBackupErrorTime;
@property(retain, nonatomic) SCCDGalleryProfile *profile; // @dynamic profile;
@property(retain, nonatomic) NSString *readFeaturedStoryIds; // @dynamic readFeaturedStoryIds;
@property(retain, nonatomic) NSString *viewedFeaturedStoryIds; // @dynamic viewedFeaturedStoryIds;

@end

