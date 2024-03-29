//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SCActionModel, SCSearchActionButtonViewModel, SCSearchPersonCircularBadgeViewModel, SCSearchPersonStoryThumbnail;

@interface SCSearchPersonViewModelBuilder : NSObject
{
    NSString *_username;
    NSString *_userId;
    SCSearchPersonStoryThumbnail *_thumbnail;
    NSString *_displayName;
    NSString *_feediconName;
    NSString *_friendmoji;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSString *_stickerId;
    NSString *_suggestedReason;
    long long _searchResultReasonEnum;
    NSString *_suggestionToken;
    _Bool _isOfficial;
    _Bool _isPopular;
    long long _viewStyle;
    SCSearchActionButtonViewModel *_actionButtonViewModel;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_storyThumbnailTapActionModel;
    SCActionModel *_debugActionModel;
    SCActionModel *_bitmojiThumbnailTapActionModel;
    SCSearchActionButtonViewModel *_dismissActionButtonViewModel;
    _Bool _shouldShowSeparatorLine;
    SCSearchPersonCircularBadgeViewModel *_circularBadgeViewModel;
    long long _storyThumbnailState;
    NSDate *_lastInteractionTimestamp;
    NSString *_actionText;
}

+ (id)searchPersonViewModel;
+ (id)searchPersonViewModelFromExistingSearchPersonViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withActionButtonViewModel:(id)arg1;
- (id)withActionText:(id)arg1;
- (id)withBitmojiAvatarId:(id)arg1;
- (id)withBitmojiSelfieId:(id)arg1;
- (id)withBitmojiThumbnailTapActionModel:(id)arg1;
- (id)withCircularBadgeViewModel:(id)arg1;
- (id)withDebugActionModel:(id)arg1;
- (id)withDismissActionButtonViewModel:(id)arg1;
- (id)withDisplayName:(id)arg1;
- (id)withFeediconName:(id)arg1;
- (id)withFriendmoji:(id)arg1;
- (id)withIsOfficial:(_Bool)arg1;
- (id)withIsPopular:(_Bool)arg1;
- (id)withLastInteractionTimestamp:(id)arg1;
- (id)withLongPressActionModel:(id)arg1;
- (id)withSearchResultReasonEnum:(long long)arg1;
- (id)withShouldShowSeparatorLine:(_Bool)arg1;
- (id)withStickerId:(id)arg1;
- (id)withStoryThumbnailState:(long long)arg1;
- (id)withStoryThumbnailTapActionModel:(id)arg1;
- (id)withSuggestedReason:(id)arg1;
- (id)withSuggestionToken:(id)arg1;
- (id)withTapActionModel:(id)arg1;
- (id)withThumbnail:(id)arg1;
- (id)withUserId:(id)arg1;
- (id)withUsername:(id)arg1;
- (id)withViewStyle:(long long)arg1;

@end

