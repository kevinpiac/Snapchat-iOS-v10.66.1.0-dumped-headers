//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class SOJUBroadcastMobsModelCustomMobStoryExtraData, SOJUBroadcastMobsModelGeofencedMobStoryExtraData, SOJUBroadcastMobsModelGroupChatMobStoryExtraData, SOJUBroadcastMobsModelPrivateMobStoryExtraData;

@protocol SOJUBroadcastMobsModelMobStoryTypeExtraData <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelCustomMobStoryExtraData *custom;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelGeofencedMobStoryExtraData *geofenced;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelGroupChatMobStoryExtraData *groupChat;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelPrivateMobStoryExtraData *privateStory;
@end
