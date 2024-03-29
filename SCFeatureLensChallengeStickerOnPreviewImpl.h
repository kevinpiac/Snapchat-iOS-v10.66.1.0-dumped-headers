//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensChallengeStickerOnPreview-Protocol.h"

@class NSArray, NSString, SCLazy, SCLensChallengesSectionItem, SCPreviewConfiguration;
@protocol SCPreviewFeatureStickerContainer;

@interface SCFeatureLensChallengeStickerOnPreviewImpl : SCFeature <SCFeatureLensChallengeStickerOnPreview>
{
    SCLazy *_lensChallengeSchedule;
    id <SCPreviewFeatureStickerContainer> _stickerContainer;
    SCPreviewConfiguration *_configuration;
    SCLazy *_lensExplorerItemCreator;
    NSArray *_lensChallengesScheduleItems;
}

- (void).cxx_destruct;
- (void)_insertStickerForSongMetadata:(id)arg1 stickerId:(id)arg2;
- (void)activate;
- (void)attachLensChallengeStickerIfNeeded;
- (id)initWithLensChallengeSchedule:(id)arg1 stickerContainer:(id)arg2 configuration:(id)arg3 lensExplorerItemCreator:(id)arg4;
@property(readonly, nonatomic) NSString *lensChallengeName;
@property(readonly, nonatomic) SCLensChallengesSectionItem *lensChallengeScheduleItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

