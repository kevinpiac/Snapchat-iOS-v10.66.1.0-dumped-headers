//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCRBrowserCardAction, SCRDeeplinkCardAction, SCRExternalUrlCardAction, SCRSaveSearchAction, SCRSearchAction, SCRStoryCardAction, SCRUserChatCardAction, SCRUserProfileCardAction, SCRUserStoryCardAction;

@interface SCRCardAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(retain, nonatomic) SCRUserChatCardAction *chat; // @dynamic chat;
@property(retain, nonatomic) SCRDeeplinkCardAction *gotoDeeplink; // @dynamic gotoDeeplink;
@property(nonatomic) _Bool preload; // @dynamic preload;
@property(retain, nonatomic) SCRSaveSearchAction *saveSearch; // @dynamic saveSearch;
@property(retain, nonatomic) SCRSearchAction *search; // @dynamic search;
@property(retain, nonatomic) SCRBrowserCardAction *showBrowser; // @dynamic showBrowser;
@property(retain, nonatomic) SCRExternalUrlCardAction *showExternalURL; // @dynamic showExternalURL;
@property(retain, nonatomic) SCRUserStoryCardAction *showMyStory; // @dynamic showMyStory;
@property(retain, nonatomic) SCRUserProfileCardAction *showProfile; // @dynamic showProfile;
@property(retain, nonatomic) SCRStoryCardAction *showStory; // @dynamic showStory;

@end

