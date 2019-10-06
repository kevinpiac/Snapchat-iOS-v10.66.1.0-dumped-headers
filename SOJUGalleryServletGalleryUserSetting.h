//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletGalleryUserSetting-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletGalleryUserSetting : NSObject <SOJUGalleryServletGalleryUserSetting>
{
    NSNumber *_storyAutoSaving;
    NSNumber *_autoSaveToCameraRoll;
    NSNumber *_backupOnCellular;
    NSNumber *_privateGalleryEnabled;
    NSNumber *_topSecretPrivateGalleryEnabled;
    NSNumber *_saveToPrivateGalleryByDefault;
    NSString *_snapSaveOption;
    NSNumber *_entriesToPrefetchGrid;
    NSNumber *_entriesToPrefetchBrowse;
    NSNumber *_minMediaCacheSize;
    NSNumber *_mediaCachePercentage;
    NSNumber *_swipedIntoMemoriesPage;
    NSNumber *_forceSyncRequired;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *autoSaveToCameraRoll; // @synthesize autoSaveToCameraRoll=_autoSaveToCameraRoll;
- (_Bool)autoSaveToCameraRollValue;
@property(readonly, copy, nonatomic) NSNumber *backupOnCellular; // @synthesize backupOnCellular=_backupOnCellular;
- (_Bool)backupOnCellularValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *entriesToPrefetchBrowse; // @synthesize entriesToPrefetchBrowse=_entriesToPrefetchBrowse;
- (int)entriesToPrefetchBrowseValue;
@property(readonly, copy, nonatomic) NSNumber *entriesToPrefetchGrid; // @synthesize entriesToPrefetchGrid=_entriesToPrefetchGrid;
- (int)entriesToPrefetchGridValue;
@property(readonly, copy, nonatomic) NSNumber *forceSyncRequired; // @synthesize forceSyncRequired=_forceSyncRequired;
- (_Bool)forceSyncRequiredValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithStoryAutoSaving:(id)arg1 autoSaveToCameraRoll:(id)arg2 backupOnCellular:(id)arg3 privateGalleryEnabled:(id)arg4 topSecretPrivateGalleryEnabled:(id)arg5 saveToPrivateGalleryByDefault:(id)arg6 snapSaveOption:(id)arg7 entriesToPrefetchGrid:(id)arg8 entriesToPrefetchBrowse:(id)arg9 minMediaCacheSize:(id)arg10 mediaCachePercentage:(id)arg11 swipedIntoMemoriesPage:(id)arg12 forceSyncRequired:(id)arg13;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *mediaCachePercentage; // @synthesize mediaCachePercentage=_mediaCachePercentage;
- (double)mediaCachePercentageValue;
@property(readonly, copy, nonatomic) NSNumber *minMediaCacheSize; // @synthesize minMediaCacheSize=_minMediaCacheSize;
- (long long)minMediaCacheSizeValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *privateGalleryEnabled; // @synthesize privateGalleryEnabled=_privateGalleryEnabled;
- (_Bool)privateGalleryEnabledValue;
@property(readonly, copy, nonatomic) NSNumber *saveToPrivateGalleryByDefault; // @synthesize saveToPrivateGalleryByDefault=_saveToPrivateGalleryByDefault;
- (_Bool)saveToPrivateGalleryByDefaultValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *snapSaveOption; // @synthesize snapSaveOption=_snapSaveOption;
- (long long)snapSaveOptionEnum;
@property(readonly, copy, nonatomic) NSNumber *storyAutoSaving; // @synthesize storyAutoSaving=_storyAutoSaving;
- (_Bool)storyAutoSavingValue;
@property(readonly, copy, nonatomic) NSNumber *swipedIntoMemoriesPage; // @synthesize swipedIntoMemoriesPage=_swipedIntoMemoriesPage;
- (_Bool)swipedIntoMemoriesPageValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *topSecretPrivateGalleryEnabled; // @synthesize topSecretPrivateGalleryEnabled=_topSecretPrivateGalleryEnabled;
- (_Bool)topSecretPrivateGalleryEnabledValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

