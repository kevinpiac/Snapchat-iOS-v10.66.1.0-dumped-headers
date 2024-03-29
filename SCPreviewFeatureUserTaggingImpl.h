//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureUserTagging-Protocol.h"

@class SCPreviewConfiguration, SCUserSession;
@protocol SCUserTaggingFriendsProvider;

@interface SCPreviewFeatureUserTaggingImpl : SCFeature <SCPreviewFeatureUserTagging>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    id <SCUserTaggingFriendsProvider> _userTaggingFriendsProvider;
}

- (void).cxx_destruct;
- (id)allNotifiedUsernamesfromCaptionStates:(id)arg1 andStickerStates:(id)arg2;
- (long long)captionCarouselUserTagCountFromCaptions:(id)arg1;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 userTaggingFriendsProvider:(id)arg3;
- (_Bool)shouldEnableUserTagging;
- (_Bool)shouldEnableUserTaggingButton;
- (id)staticCaptionWithUserTagPositionsFromCaptions:(id)arg1;
- (id)userTaggingInfoFromCaptionStates:(id)arg1;
- (id)userTaggingInfoFromCaptionStates:(id)arg1 andStickerStates:(id)arg2;
- (id)userTaggingInfoFromStickerStates:(id)arg1;

@end

