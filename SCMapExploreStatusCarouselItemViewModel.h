//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSSet, NSString, NSURL, SCMapCarouselButtonViewModel, SCMapExploreStatusCarouselThumbnailViewModel, UIColor;

@interface SCMapExploreStatusCarouselItemViewModel : NSObject <NSCopying>
{
    _Bool _subtitleAllCaps;
    SCMapExploreStatusCarouselThumbnailViewModel *_thumbnailViewModel;
    NSString *_title;
    NSString *_subtitle;
    UIColor *_subtitleColor;
    NSString *_body;
    NSString *_footer;
    SCMapCarouselButtonViewModel *_buttonViewModel;
    NSURL *_buttonURL;
    NSSet *_statusIds;
    NSString *_replyUserId;
}

+ (id)_bodyForItem:(id)arg1 mapPeopleFriendsProvider:(id)arg2;
+ (id)_buttonURLForItem:(id)arg1 currentUserId:(id)arg2;
+ (id)_footerForItem:(id)arg1;
+ (id)_footerTextForTimestamp:(double)arg1;
+ (id)_subtitleForItem:(id)arg1;
+ (id)_subtitleForStatuses:(id)arg1;
+ (id)_textByReplacingNamePlaceholdersInStatusGroup:(id)arg1 mapPeopleFriendsProvider:(id)arg2;
+ (id)_titleForItem:(id)arg1 currentUserId:(id)arg2 mapPeopleFriendsProvider:(id)arg3;
+ (id)_titleForPeople:(id)arg1 currentUserId:(id)arg2;
+ (id)viewModelWithCurrentUserId:(id)arg1 isInlineReplyEnabled:(_Bool)arg2 item:(id)arg3 mapPeopleFriendsProvider:(id)arg4 statusStore:(id)arg5;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSURL *buttonURL; // @synthesize buttonURL=_buttonURL;
@property(readonly, copy, nonatomic) SCMapCarouselButtonViewModel *buttonViewModel; // @synthesize buttonViewModel=_buttonViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
- (unsigned long long)hash;
- (id)initWithThumbnailViewModel:(id)arg1 title:(id)arg2 subtitle:(id)arg3 subtitleAllCaps:(_Bool)arg4 subtitleColor:(id)arg5 body:(id)arg6 footer:(id)arg7 buttonViewModel:(id)arg8 buttonURL:(id)arg9 statusIds:(id)arg10 replyUserId:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isSubtitleAllCaps) _Bool subtitleAllCaps; // @synthesize subtitleAllCaps=_subtitleAllCaps;
@property(readonly, copy, nonatomic) NSString *replyUserId; // @synthesize replyUserId=_replyUserId;
@property(readonly, copy, nonatomic) NSSet *statusIds; // @synthesize statusIds=_statusIds;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(readonly, copy, nonatomic) SCMapExploreStatusCarouselThumbnailViewModel *thumbnailViewModel; // @synthesize thumbnailViewModel=_thumbnailViewModel;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

