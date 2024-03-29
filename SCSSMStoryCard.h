//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCORECompositeStoryId, SCSSMCardDebugInfo, SCSSMClientDisplayInfo, SCSSMClientRankingFeatures, SCSSMCognacCard, SCSSMJaguarClientLogging, SCSSMLensChallengeCard, SCSSMLensChallengeStoryCard, SCSSMLensObjectCard, SCSSMMapTileCard, SCSSMMomentStoryCard, SCSSMOurStoryCard, SCSSMPivotCard, SCSSMPromotedStoryCard, SCSSMPublicUserStoryCard, SCSSMPublisherStoryCard, SCSSMSelectionCard, SCSSMSoloStoryCard, SCSSMStoryCard_TapAction, SCSSMUserStoryCard;

@interface SCSSMStoryCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int cardOneOfCase; // @dynamic cardOneOfCase;
@property(retain, nonatomic) SCSSMClientDisplayInfo *clientDisplayInfo; // @dynamic clientDisplayInfo;
@property(retain, nonatomic) SCSSMClientRankingFeatures *clientRankingFeatures; // @dynamic clientRankingFeatures;
@property(retain, nonatomic) SCSSMCognacCard *cognacCard; // @dynamic cognacCard;
@property(retain, nonatomic) SCCORECompositeStoryId *compositeStoryId; // @dynamic compositeStoryId;
@property(retain, nonatomic) SCSSMCardDebugInfo *debugInfo; // @dynamic debugInfo;
@property(copy, nonatomic) NSString *featuredBannerText; // @dynamic featuredBannerText;
@property(nonatomic) _Bool hasClientDisplayInfo; // @dynamic hasClientDisplayInfo;
@property(nonatomic) _Bool hasClientRankingFeatures; // @dynamic hasClientRankingFeatures;
@property(nonatomic) _Bool hasCompositeStoryId; // @dynamic hasCompositeStoryId;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasJaguarClientLogging; // @dynamic hasJaguarClientLogging;
@property(nonatomic) _Bool hasTapAction; // @dynamic hasTapAction;
@property(nonatomic) _Bool hasUpnextRecommendation; // @dynamic hasUpnextRecommendation;
@property(nonatomic) int hideAfterWatch; // @dynamic hideAfterWatch;
@property(nonatomic) _Bool hideSubscribeButton; // @dynamic hideSubscribeButton;
@property(nonatomic) _Bool isFeatured; // @dynamic isFeatured;
@property(nonatomic) _Bool isNotificationOptedIn; // @dynamic isNotificationOptedIn;
@property(nonatomic) _Bool isSubscribed; // @dynamic isSubscribed;
@property(retain, nonatomic) SCSSMJaguarClientLogging *jaguarClientLogging; // @dynamic jaguarClientLogging;
@property(nonatomic) long long latestUpdateTimestampSecs; // @dynamic latestUpdateTimestampSecs;
@property(retain, nonatomic) SCSSMLensChallengeCard *lensChallengeCard; // @dynamic lensChallengeCard;
@property(retain, nonatomic) SCSSMLensChallengeStoryCard *lensChallengeStoryCard; // @dynamic lensChallengeStoryCard;
@property(retain, nonatomic) SCSSMLensObjectCard *lensObjectCard; // @dynamic lensObjectCard;
@property(retain, nonatomic) SCSSMMapTileCard *mapTileCard; // @dynamic mapTileCard;
@property(retain, nonatomic) SCSSMMomentStoryCard *momentStoryCard; // @dynamic momentStoryCard;
@property(nonatomic) _Bool notModerated; // @dynamic notModerated;
@property(retain, nonatomic) SCSSMOurStoryCard *ourStoryCard; // @dynamic ourStoryCard;
@property(retain, nonatomic) SCSSMPivotCard *pivotCard; // @dynamic pivotCard;
@property(retain, nonatomic) SCSSMPromotedStoryCard *promotedStoryCard; // @dynamic promotedStoryCard;
@property(retain, nonatomic) SCSSMPublicUserStoryCard *publicUserStoryCard; // @dynamic publicUserStoryCard;
@property(retain, nonatomic) SCSSMPublisherStoryCard *publisherStoryCard; // @dynamic publisherStoryCard;
@property(nonatomic) _Bool rankShouldBeFixed; // @dynamic rankShouldBeFixed;
@property(nonatomic) float score; // @dynamic score;
@property(retain, nonatomic) SCSSMSelectionCard *selectionCard; // @dynamic selectionCard;
@property(retain, nonatomic) SCSSMSoloStoryCard *soloStoryCard; // @dynamic soloStoryCard;
@property(nonatomic) unsigned long long storyCacheFp; // @dynamic storyCacheFp;
@property(nonatomic) unsigned long long storyDedupeFp; // @dynamic storyDedupeFp;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(nonatomic) int storySubtype; // @dynamic storySubtype;
@property(retain, nonatomic) SCSSMStoryCard_TapAction *tapAction; // @dynamic tapAction;
@property(nonatomic) float tileAspectRatio; // @dynamic tileAspectRatio;
@property(copy, nonatomic) NSString *tileDominantColor; // @dynamic tileDominantColor;
@property(retain, nonatomic) SCSSMUserStoryCard *userStoryCard; // @dynamic userStoryCard;

@end

