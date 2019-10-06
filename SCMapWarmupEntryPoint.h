//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBitmojiFetchServices, SCLocationSharingServices, SCMapBitmojiPreloader, SCMapFriendLocationsPreloader, SCMapboxStaticMapInfoProvider, SCNavigationServices, SCUserSessionScope;

@interface SCMapWarmupEntryPoint : SCEntryPoint
{
    SCMapBitmojiPreloader *_bitmojiPreloader;
    SCMapFriendLocationsPreloader *_friendLocationsPreloader;
    SCMapboxStaticMapInfoProvider *_mapboxStaticMapInfoProvider;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCLocationSharingServices *_locationSharingServices;
    SCNavigationServices *_navigationServices;
    SCUserSessionScope *_userSessionScope;
}

- (void).cxx_destruct;
- (void)_onIdleInBackground;
- (void)begin;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
@property(nonatomic) __weak SCLocationSharingServices *locationSharingServices; // @synthesize locationSharingServices=_locationSharingServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

