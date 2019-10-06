//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString, SCCommunityLensData, SCLensResourceContainer, SOJUSponsoredSlug, SOJUUnlockableTrackInfo, SOJUUnlockablesAttachment;

@interface SCLensBuilder : NSObject
{
    NSString *_lensId;
    NSString *_name;
    NSString *_code;
    NSString *_hintId;
    NSDictionary *_hintTranslations;
    NSString *_iconURL;
    NSString *_filterOverlayImageURL;
    NSString *_bitmojiComicId;
    SCLensResourceContainer *_resourceContainer;
    NSDate *_expirationDate;
    long long _type;
    long long _section;
    NSArray *_categories;
    _Bool _isFeatured;
    _Bool _isSponsored;
    SOJUSponsoredSlug *_sponsoredSlug;
    NSArray *_scheduleIntervals;
    _Bool _isDemo;
    NSDate *_demoStartDate;
    long long _absoluteCarouselPosition;
    SOJUUnlockableTrackInfo *_unlockableTrackInfo;
    NSArray *_manifest;
    _Bool _isThirdParty;
    _Bool _isStudioPreview;
    unsigned long long _activationCameraPosition;
    NSString *_encryptedGeoData;
    NSString *_unlockCompanionBackReferenceId;
    NSSet *_cameraContexts;
    NSSet *_applicableContexts;
    _Bool _hasContextCards;
    NSString *_onDemandTemplateId;
    SOJUUnlockablesAttachment *_unlockablesAttachment;
    _Bool _isRanked;
    long long _priority;
    NSArray *_lensDescriptors;
    SCCommunityLensData *_communityLensData;
    long long _snappablesReplyType;
    NSString *_snappablesTaglineKey;
    NSArray *_snappablesPlayButtonGradientColors;
    _Bool _isLeftCarousel;
    NSString *_contextHint;
    _Bool _isCommunity;
}

+ (id)withLens:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAbsoluteCarouselPosition:(long long)arg1;
- (id)setActivationCameraPosition:(unsigned long long)arg1;
- (id)setApplicableContexts:(id)arg1;
- (id)setBitmojiComicId:(id)arg1;
- (id)setCameraContexts:(id)arg1;
- (id)setCategories:(id)arg1;
- (id)setCode:(id)arg1;
- (id)setCommunityLensData:(id)arg1;
- (id)setContextHint:(id)arg1;
- (id)setDemoStartDate:(id)arg1;
- (id)setEncryptedGeoData:(id)arg1;
- (id)setExpirationDate:(id)arg1;
- (id)setFilterOverlayImageURL:(id)arg1;
- (id)setHasContextCards:(_Bool)arg1;
- (id)setHintId:(id)arg1;
- (id)setHintTranslations:(id)arg1;
- (id)setIconURL:(id)arg1;
- (id)setIsCommunity:(_Bool)arg1;
- (id)setIsDemo:(_Bool)arg1;
- (id)setIsFeatured:(_Bool)arg1;
- (id)setIsLeftCarousel:(_Bool)arg1;
- (id)setIsRanked:(_Bool)arg1;
- (id)setIsSponsored:(_Bool)arg1;
- (id)setIsStudioPreview:(_Bool)arg1;
- (id)setIsThirdParty:(_Bool)arg1;
- (id)setLensDescriptors:(id)arg1;
- (id)setLensId:(id)arg1;
- (id)setManifest:(id)arg1;
- (id)setName:(id)arg1;
- (id)setOnDemandTemplateId:(id)arg1;
- (id)setPriority:(long long)arg1;
- (id)setResourceContainer:(id)arg1;
- (id)setScheduleIntervals:(id)arg1;
- (id)setSection:(long long)arg1;
- (id)setSnappablesPlayButtonGradientColors:(id)arg1;
- (id)setSnappablesReplyType:(long long)arg1;
- (id)setSnappablesTaglineKey:(id)arg1;
- (id)setSponsoredSlug:(id)arg1;
- (id)setType:(long long)arg1;
- (id)setUnlockCompanionBackReferenceId:(id)arg1;
- (id)setUnlockableTrackInfo:(id)arg1;
- (id)setUnlockablesAttachment:(id)arg1;

@end

