//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUGeofence, SOJUStickerPackContextualMetadata;

@interface SOJUStickerPackBuilder : NSObject
{
    NSString *_packId;
    NSString *_categoryId;
    NSString *_iconUrl;
    NSNumber *_iconVersion;
    NSString *_url;
    NSNumber *_version;
    NSNumber *_active;
    NSString *_type;
    NSArray *_capabilities;
    NSArray *_target;
    NSString *_superCategory;
    SOJUGeofence *_geofence;
    NSString *_unlockablePreviewImgUrl;
    NSString *_title;
    NSNumber *_unlockExpirationTimeInSec;
    SOJUStickerPackContextualMetadata *_contextualPackMetadata;
    NSString *_unlockableId;
    NSNumber *_isExpandable;
    NSString *_metadataUrl;
    NSNumber *_expirationTtlInSec;
}

+ (id)withJUStickerPack:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setActive:(id)arg1;
- (id)setActiveValue:(_Bool)arg1;
- (id)setCapabilities:(id)arg1;
- (id)setCategoryId:(id)arg1;
- (id)setContextualPackMetadata:(id)arg1;
- (id)setExpirationTtlInSec:(id)arg1;
- (id)setExpirationTtlInSecValue:(long long)arg1;
- (id)setGeofence:(id)arg1;
- (id)setIconUrl:(id)arg1;
- (id)setIconVersion:(id)arg1;
- (id)setIconVersionValue:(int)arg1;
- (id)setIsExpandable:(id)arg1;
- (id)setIsExpandableValue:(_Bool)arg1;
- (id)setMetadataUrl:(id)arg1;
- (id)setPackId:(id)arg1;
- (id)setSuperCategory:(id)arg1;
- (id)setSuperCategoryEnum:(long long)arg1;
- (id)setTarget:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setUnlockExpirationTimeInSec:(id)arg1;
- (id)setUnlockExpirationTimeInSecValue:(long long)arg1;
- (id)setUnlockableId:(id)arg1;
- (id)setUnlockablePreviewImgUrl:(id)arg1;
- (id)setUrl:(id)arg1;
- (id)setVersion:(id)arg1;
- (id)setVersionValue:(int)arg1;

@end

