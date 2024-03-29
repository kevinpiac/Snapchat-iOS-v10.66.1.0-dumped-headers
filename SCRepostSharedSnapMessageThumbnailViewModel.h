//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatSingleMediaThumbnailViewModel-Protocol.h"

@class Friend, NSAttributedString, NSString, SCBaseMediaThumbnailViewModel, SOJUSnapCreatorAttribution;

@interface SCRepostSharedSnapMessageThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel>
{
    NSAttributedString *_creatorInfoText;
    SOJUSnapCreatorAttribution *_creatorAttribution;
    _Bool _isAttributionPrivate;
    NSString *_recipientForOneOnOneChat;
    NSString *_currentUserId;
    SCBaseMediaThumbnailViewModel *_baseMediaThumbnailViewModel;
    Friend *_snapchatter;
    NSString *_publisherLogoUrl;
}

- (void).cxx_destruct;
- (void)_parseAttributionIcon;
- (void)_parseAttributionText;
- (id)attributedTextForCreator;
@property(readonly, nonatomic) SCBaseMediaThumbnailViewModel *baseMediaThumbnailViewModel; // @synthesize baseMediaThumbnailViewModel=_baseMediaThumbnailViewModel;
- (_Bool)containsVideo;
- (id)initWithChatMediaContent:(id)arg1 mediaMetadata:(id)arg2 recipientForOneOnOneChat:(id)arg3 attribution:(id)arg4 currentUserId:(id)arg5;
@property(readonly, nonatomic) NSString *publisherLogoUrl; // @synthesize publisherLogoUrl=_publisherLogoUrl;
- (_Bool)shouldDisplayTapToLoad;
@property(readonly, nonatomic) Friend *snapchatter; // @synthesize snapchatter=_snapchatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

