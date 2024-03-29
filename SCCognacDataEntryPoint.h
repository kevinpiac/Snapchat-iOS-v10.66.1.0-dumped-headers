//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBitmojiFetchServices, SCBitmojiSelfieServices, SCContentDeliveryServices, SCGroupServices, SCServicesExposer, SCSnapchatterServices, SCUserSessionScope, SCUserStorageServices;

@interface SCCognacDataEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCSnapchatterServices *_snapchatterServices;
    SCGroupServices *_groupServices;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCServicesExposer *_cognacBaseServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(retain, nonatomic) SCServicesExposer *cognacBaseServicesExposer; // @synthesize cognacBaseServicesExposer=_cognacBaseServicesExposer;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

