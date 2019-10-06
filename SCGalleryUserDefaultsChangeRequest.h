//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SCCDGalleryUserDefaults, SCObjectPlaceholder;

@interface SCGalleryUserDefaultsChangeRequest : NSObject
{
    SCCDGalleryUserDefaults *_galleryUserDefaults;
    SCObjectPlaceholder *_objectPlaceholder;
}

+ (id)changeRequestForGalleryUserDefaults:(id)arg1;
+ (id)creationRequestWithGalleryUserDefaults:(id)arg1;
+ (void)deleteAllGalleryUserDefaults;
+ (void)deleteGalleryUserDefaults:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool completedImportFromCameraRoll;
@property(nonatomic) _Bool didInitialCloudSync;
@property(nonatomic) _Bool dismissedImportButtonBelowSnaps;
@property(nonatomic) _Bool displayedCameraRollTabIntroPopup;
@property(nonatomic) _Bool displayedInitialCreateStoryPopup;
@property(nonatomic) _Bool displayedInitialNeedsPhotoAccessPopup;
@property(nonatomic) _Bool displayedPostLongVideoToStoryPopup;
@property(nonatomic) _Bool displayedSaveOptionPrompt;
- (id)initWithGalleryUserDefaults:(id)arg1;
@property(copy, nonatomic) NSDate *latestAckedBackupErrorTime;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, nonatomic) SCObjectPlaceholder *placeholderForCreatedGalleryUserDefaults;
@property(copy, nonatomic) NSString *readFeaturedStoryIds;
- (void)setProfile:(id)arg1;
@property(copy, nonatomic) NSString *viewedFeaturedStoryIds;
- (void)setWithGalleryUserDefaults:(id)arg1;

@end
