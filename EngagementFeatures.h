//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class WindowedFloatMetrics, WindowedIntMetrics;

@interface EngagementFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) WindowedFloatMetrics *chatTimeSpent; // @dynamic chatTimeSpent;
@property(nonatomic) _Bool hasChatTimeSpent; // @dynamic hasChatTimeSpent;
@property(nonatomic) _Bool hasNormalizedNumChatsSentViaGroup; // @dynamic hasNormalizedNumChatsSentViaGroup;
@property(nonatomic) _Bool hasNormalizedNumSnapsSentViaGroup; // @dynamic hasNormalizedNumSnapsSentViaGroup;
@property(nonatomic) _Bool hasNum1To1ChatsSent; // @dynamic hasNum1To1ChatsSent;
@property(nonatomic) _Bool hasNum1To1SnapsSent; // @dynamic hasNum1To1SnapsSent;
@property(nonatomic) _Bool hasNum1ToManyChatsSent; // @dynamic hasNum1ToManyChatsSent;
@property(nonatomic) _Bool hasNum1ToManySnapsSent; // @dynamic hasNum1ToManySnapsSent;
@property(nonatomic) _Bool hasNumBitmojiStickersSent; // @dynamic hasNumBitmojiStickersSent;
@property(nonatomic) _Bool hasNumChatSaved; // @dynamic hasNumChatSaved;
@property(nonatomic) _Bool hasNumChatScreenshots; // @dynamic hasNumChatScreenshots;
@property(nonatomic) _Bool hasNumChatView; // @dynamic hasNumChatView;
@property(nonatomic) _Bool hasNumChatsSent; // @dynamic hasNumChatsSent;
@property(nonatomic) _Bool hasNumCustomStickersSent; // @dynamic hasNumCustomStickersSent;
@property(nonatomic) _Bool hasNumHoursWithStoryStoryView; // @dynamic hasNumHoursWithStoryStoryView;
@property(nonatomic) _Bool hasNumMemoriesShared; // @dynamic hasNumMemoriesShared;
@property(nonatomic) _Bool hasNumScreenshots; // @dynamic hasNumScreenshots;
@property(nonatomic) _Bool hasNumSnapReplays; // @dynamic hasNumSnapReplays;
@property(nonatomic) _Bool hasNumSnapScreenshots; // @dynamic hasNumSnapScreenshots;
@property(nonatomic) _Bool hasNumSnapView; // @dynamic hasNumSnapView;
@property(nonatomic) _Bool hasNumSnapsSent; // @dynamic hasNumSnapsSent;
@property(nonatomic) _Bool hasNumStickersSent; // @dynamic hasNumStickersSent;
@property(nonatomic) _Bool hasNumStoryInterstitialView; // @dynamic hasNumStoryInterstitialView;
@property(nonatomic) _Bool hasNumStoryInterstitialViewSkips; // @dynamic hasNumStoryInterstitialViewSkips;
@property(nonatomic) _Bool hasNumStoryPlaylistExits; // @dynamic hasNumStoryPlaylistExits;
@property(nonatomic) _Bool hasNumStorySnapCompletions; // @dynamic hasNumStorySnapCompletions;
@property(nonatomic) _Bool hasNumStorySnapPosts; // @dynamic hasNumStorySnapPosts;
@property(nonatomic) _Bool hasNumStorySnapReplays; // @dynamic hasNumStorySnapReplays;
@property(nonatomic) _Bool hasNumStorySnapReplies; // @dynamic hasNumStorySnapReplies;
@property(nonatomic) _Bool hasNumStorySnapSkips; // @dynamic hasNumStorySnapSkips;
@property(nonatomic) _Bool hasNumStorySnapsScreenshots; // @dynamic hasNumStorySnapsScreenshots;
@property(nonatomic) _Bool hasNumStorySnapsViewed; // @dynamic hasNumStorySnapsViewed;
@property(nonatomic) _Bool hasNumStorySnapsViewedRaw; // @dynamic hasNumStorySnapsViewedRaw;
@property(nonatomic) _Bool hasNumStoryStoryCompletions; // @dynamic hasNumStoryStoryCompletions;
@property(nonatomic) _Bool hasNumStoryStoryLongImp; // @dynamic hasNumStoryStoryLongImp;
@property(nonatomic) _Bool hasNumStoryStorySkips; // @dynamic hasNumStoryStorySkips;
@property(nonatomic) _Bool hasNumStoryStoryView; // @dynamic hasNumStoryStoryView;
@property(nonatomic) _Bool hasNumStoryStoryViewViaInterstitialTap; // @dynamic hasNumStoryStoryViewViaInterstitialTap;
@property(nonatomic) _Bool hasNumStoryStoryViewViaTap; // @dynamic hasNumStoryStoryViewViaTap;
@property(nonatomic) _Bool hasSnapTimeSpent; // @dynamic hasSnapTimeSpent;
@property(nonatomic) _Bool hasStorySnapTimeSpent; // @dynamic hasStorySnapTimeSpent;
@property(nonatomic) _Bool hasStoryStoryLongImpTime; // @dynamic hasStoryStoryLongImpTime;
@property(nonatomic) _Bool hasTotalChatAckTime; // @dynamic hasTotalChatAckTime;
@property(nonatomic) _Bool hasTotalSnapAckTime; // @dynamic hasTotalSnapAckTime;
@property(retain, nonatomic) WindowedIntMetrics *normalizedNumChatsSentViaGroup; // @dynamic normalizedNumChatsSentViaGroup;
@property(retain, nonatomic) WindowedIntMetrics *normalizedNumSnapsSentViaGroup; // @dynamic normalizedNumSnapsSentViaGroup;
@property(retain, nonatomic) WindowedFloatMetrics *num1To1ChatsSent; // @dynamic num1To1ChatsSent;
@property(retain, nonatomic) WindowedFloatMetrics *num1To1SnapsSent; // @dynamic num1To1SnapsSent;
@property(retain, nonatomic) WindowedFloatMetrics *num1ToManyChatsSent; // @dynamic num1ToManyChatsSent;
@property(retain, nonatomic) WindowedFloatMetrics *num1ToManySnapsSent; // @dynamic num1ToManySnapsSent;
@property(retain, nonatomic) WindowedIntMetrics *numBitmojiStickersSent; // @dynamic numBitmojiStickersSent;
@property(retain, nonatomic) WindowedIntMetrics *numChatSaved; // @dynamic numChatSaved;
@property(retain, nonatomic) WindowedIntMetrics *numChatScreenshots; // @dynamic numChatScreenshots;
@property(retain, nonatomic) WindowedIntMetrics *numChatView; // @dynamic numChatView;
@property(retain, nonatomic) WindowedIntMetrics *numChatsSent; // @dynamic numChatsSent;
@property(retain, nonatomic) WindowedIntMetrics *numCustomStickersSent; // @dynamic numCustomStickersSent;
@property(retain, nonatomic) WindowedIntMetrics *numHoursWithStoryStoryView; // @dynamic numHoursWithStoryStoryView;
@property(retain, nonatomic) WindowedIntMetrics *numMemoriesShared; // @dynamic numMemoriesShared;
@property(retain, nonatomic) WindowedIntMetrics *numScreenshots; // @dynamic numScreenshots;
@property(retain, nonatomic) WindowedIntMetrics *numSnapReplays; // @dynamic numSnapReplays;
@property(retain, nonatomic) WindowedIntMetrics *numSnapScreenshots; // @dynamic numSnapScreenshots;
@property(retain, nonatomic) WindowedIntMetrics *numSnapView; // @dynamic numSnapView;
@property(retain, nonatomic) WindowedIntMetrics *numSnapsSent; // @dynamic numSnapsSent;
@property(retain, nonatomic) WindowedIntMetrics *numStickersSent; // @dynamic numStickersSent;
@property(retain, nonatomic) WindowedIntMetrics *numStoryInterstitialView; // @dynamic numStoryInterstitialView;
@property(retain, nonatomic) WindowedIntMetrics *numStoryInterstitialViewSkips; // @dynamic numStoryInterstitialViewSkips;
@property(retain, nonatomic) WindowedIntMetrics *numStoryPlaylistExits; // @dynamic numStoryPlaylistExits;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapCompletions; // @dynamic numStorySnapCompletions;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapPosts; // @dynamic numStorySnapPosts;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapReplays; // @dynamic numStorySnapReplays;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapReplies; // @dynamic numStorySnapReplies;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapSkips; // @dynamic numStorySnapSkips;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapsScreenshots; // @dynamic numStorySnapsScreenshots;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapsViewed; // @dynamic numStorySnapsViewed;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapsViewedRaw; // @dynamic numStorySnapsViewedRaw;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStoryCompletions; // @dynamic numStoryStoryCompletions;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStoryLongImp; // @dynamic numStoryStoryLongImp;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStorySkips; // @dynamic numStoryStorySkips;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStoryView; // @dynamic numStoryStoryView;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStoryViewViaInterstitialTap; // @dynamic numStoryStoryViewViaInterstitialTap;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStoryViewViaTap; // @dynamic numStoryStoryViewViaTap;
@property(retain, nonatomic) WindowedFloatMetrics *snapTimeSpent; // @dynamic snapTimeSpent;
@property(retain, nonatomic) WindowedFloatMetrics *storySnapTimeSpent; // @dynamic storySnapTimeSpent;
@property(retain, nonatomic) WindowedFloatMetrics *storyStoryLongImpTime; // @dynamic storyStoryLongImpTime;
@property(retain, nonatomic) WindowedFloatMetrics *totalChatAckTime; // @dynamic totalChatAckTime;
@property(retain, nonatomic) WindowedFloatMetrics *totalSnapAckTime; // @dynamic totalSnapAckTime;

@end

