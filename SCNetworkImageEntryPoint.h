//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBitmojiSelfieServices, SCContentDeliveryServices, SCServicesExposer, SCStoriesServices, SCUserSessionScope;

@interface SCNetworkImageEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCStoriesServices *_storiesServices;
    SCServicesExposer *_networkImageServicesExposer;
}

- (void).cxx_destruct;
- (id)_imageDownloader;
- (void)begin;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(retain, nonatomic) SCServicesExposer *networkImageServicesExposer; // @synthesize networkImageServicesExposer=_networkImageServicesExposer;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end
