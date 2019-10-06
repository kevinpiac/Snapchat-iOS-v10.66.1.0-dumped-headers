//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSAttributedString, NSString, SCDiscoverFeedAvatarViewModel, SCDiscoverFeedTileBadgeViewModel, SCSearchTextPrefixIcon;

@interface SCDiscoverFeedLabelOverlayViewModel : NSObject <NSCopying>
{
    _Bool _enableAdSlug;
    SCSearchTextPrefixIcon *_secondaryTextPrefixIcon;
    NSString *_secondaryText;
    NSAttributedString *_title;
    SCSearchTextPrefixIcon *_subtitlePrefixIcon;
    NSAttributedString *_subtitle;
    NSArray *_storyPosters;
    double _subtitleAlpha;
    double _subtitlePrefixIconAlpha;
    SCDiscoverFeedAvatarViewModel *_avatarViewModel;
    long long _avatarPlacementType;
    SCDiscoverFeedTileBadgeViewModel *_tileBadge;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long avatarPlacementType; // @synthesize avatarPlacementType=_avatarPlacementType;
@property(readonly, copy, nonatomic) SCDiscoverFeedAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool enableAdSlug; // @synthesize enableAdSlug=_enableAdSlug;
- (unsigned long long)hash;
- (id)initWithSecondaryTextPrefixIcon:(id)arg1 secondaryText:(id)arg2 title:(id)arg3 subtitlePrefixIcon:(id)arg4 subtitle:(id)arg5 storyPosters:(id)arg6 enableAdSlug:(_Bool)arg7 subtitleAlpha:(double)arg8 subtitlePrefixIconAlpha:(double)arg9 avatarViewModel:(id)arg10 avatarPlacementType:(long long)arg11 tileBadge:(id)arg12;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, copy, nonatomic) SCSearchTextPrefixIcon *secondaryTextPrefixIcon; // @synthesize secondaryTextPrefixIcon=_secondaryTextPrefixIcon;
@property(readonly, copy, nonatomic) NSArray *storyPosters; // @synthesize storyPosters=_storyPosters;
@property(readonly, copy, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) double subtitleAlpha; // @synthesize subtitleAlpha=_subtitleAlpha;
@property(readonly, copy, nonatomic) SCSearchTextPrefixIcon *subtitlePrefixIcon; // @synthesize subtitlePrefixIcon=_subtitlePrefixIcon;
@property(readonly, nonatomic) double subtitlePrefixIconAlpha; // @synthesize subtitlePrefixIconAlpha=_subtitlePrefixIconAlpha;
@property(readonly, copy, nonatomic) SCDiscoverFeedTileBadgeViewModel *tileBadge; // @synthesize tileBadge=_tileBadge;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;

@end

