//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSValue, SCScopedAccess, Story, UIColor, UIFont;

@interface SCStoryChromeViewModel : NSObject
{
    Story *_story;
    SCScopedAccess *_friendmojiPresenter;
    SCScopedAccess *_snapKitAppStateController;
    UIColor *_snapDisplayTitleColor;
    UIColor *_snapDisplaySubTitleColor;
    NSString *_localMischiefId;
    UIColor *_repostDisplayTitleColor;
}

+ (id)chromeViewModelForContributionStoryWithServerId:(id)arg1;
- (void).cxx_destruct;
- (id)_customStoryMetadata;
- (long long)_daysSinceCreation;
- (id)_groupStoryAttribute;
- (_Bool)_hasFraming;
- (_Bool)_isSpectaclesMedia;
- (id)_officialStoryAttribute;
- (id)_snapPostTimeDate;
- (_Bool)_snapWasTakenOnThisDayInPreviousYear;
- (id)_spectaclesSubtitle;
- (id)appStoryIconUrl;
@property(readonly, nonatomic) _Bool canViewSnapPosterScore;
- (id)friendForOperaChromeHeaderAvatar;
- (id)groupParticipantsForOperaChromeHeaderAvatar;
@property(readonly, nonatomic) _Bool hasGradient;
@property(readonly, nonatomic) _Bool hasShadow;
- (id)highlightStoryIconUrl;
- (id)initWithStory:(id)arg1;
- (id)initWithStory:(id)arg1 friendmojiPresenter:(id)arg2 snapKitAppStateController:(id)arg3;
- (id)mischiefId;
@property(readonly, nonatomic) NSString *repostCreatorDisplaySubtitle;
@property(readonly, nonatomic) NSString *repostCreatorDisplayTitle;
@property(readonly, nonatomic) NSString *repostCreatorIconImageKey;
@property(readonly, nonatomic) NSString *repostDisplaySubtitle;
@property(readonly, nonatomic) NSString *repostDisplayTitle;
@property(readonly, nonatomic) UIColor *repostDisplayTitleColor;
@property(readonly, nonatomic) UIFont *repostDisplayTitleFont;
@property(readonly, nonatomic) _Bool showOfficialBadge;
@property(readonly, nonatomic) UIColor *snapAdditionalDisplayColor;
@property(readonly, copy, nonatomic) NSString *snapAdditionalDisplayTitle;
@property(readonly, nonatomic) UIFont *snapAdditionalDisplayTitleFont;
@property(readonly, nonatomic) NSString *snapComment;
@property(readonly, copy, nonatomic) NSString *snapDisplaySubTitle;
@property(readonly, nonatomic) UIColor *snapDisplaySubTitleColor;
@property(readonly, copy, nonatomic) NSValue *snapDisplaySubTitleUnderlineRange;
- (id)snapDisplaySubtitlePublicationIcon;
@property(readonly, nonatomic) UIColor *snapDisplayTitleColor;
@property(readonly, nonatomic) UIFont *snapDisplayTitleFont;
- (id)snapDisplayTitleWithEmoji:(_Bool)arg1;
@property(readonly, nonatomic) _Bool snapHasComment;
@property(readonly, copy, nonatomic) NSString *snapIconName;
- (id)snapPostTimeAgo;
@property(readonly, copy, nonatomic) NSString *snapPosterDisplayName;
- (id)snapPosterDisplayNameWithDefaultSnapDisplayTitle:(id)arg1;
@property(readonly, nonatomic) unsigned long long snapPosterScore;
@property(readonly, copy, nonatomic) NSString *snapPosterUsername;
@property(readonly, nonatomic) _Bool userInteractionEnabled;
@property(readonly, nonatomic) NSString *usernameForRepostCreatorAvatar;

@end
