//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCPBGalleryServletGalleryUserSetting : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool autoSaveToCameraRoll; // @dynamic autoSaveToCameraRoll;
@property(nonatomic) _Bool backupOnCellular; // @dynamic backupOnCellular;
@property(nonatomic) int entriesToPrefetchBrowse; // @dynamic entriesToPrefetchBrowse;
@property(nonatomic) int entriesToPrefetchGrid; // @dynamic entriesToPrefetchGrid;
@property(nonatomic) _Bool forceSyncRequired; // @dynamic forceSyncRequired;
@property(nonatomic) double mediaCachePercentage; // @dynamic mediaCachePercentage;
@property(nonatomic) long long minMediaCacheSize; // @dynamic minMediaCacheSize;
@property(nonatomic) _Bool privateGalleryEnabled; // @dynamic privateGalleryEnabled;
@property(nonatomic) _Bool saveToPrivateGalleryByDefault; // @dynamic saveToPrivateGalleryByDefault;
@property(copy, nonatomic) NSString *snapSaveOption; // @dynamic snapSaveOption;
@property(nonatomic) _Bool storyAutoSaving; // @dynamic storyAutoSaving;
@property(nonatomic) _Bool swipedIntoMemoriesPage; // @dynamic swipedIntoMemoriesPage;
@property(nonatomic) _Bool topSecretPrivateGalleryEnabled; // @dynamic topSecretPrivateGalleryEnabled;

@end
