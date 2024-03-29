//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCContextSnapViewMetrics;
@protocol SCContextDataProviding;

@protocol SCContextV2Logger <NSObject>
- (void)availableContextTypesUpdated:(NSString *)arg1;
- (void)ctaDidLoad;
- (void)logActionWithTypeString:(NSString *)arg1 cardType:(NSString *)arg2 cardId:(NSString *)arg3 contextInfoProvider:(id <SCContextDataProviding>)arg4;
- (void)logCardsDisappeared;
- (void)logCardsReappeared;
- (void)logContextMenuDismissedWithExitEvent:(long long)arg1;
- (void)logContextMenuPresentWithEntryEvent:(long long)arg1 menuType:(long long)arg2 ctaElementType:(NSString *)arg3 ctaElementIndex:(long long)arg4 ctaMaxElementIndex:(long long)arg5 contextInfoProvider:(id <SCContextDataProviding>)arg6;
- (void)logSnapViewedWithInfoProvider:(id <SCContextDataProviding>)arg1;
- (void)setInviteId:(NSString *)arg1;
- (SCContextSnapViewMetrics *)snapViewMetrics;
@property(readonly, nonatomic) long long sourceTypeForContextActions;
- (void)trackAudioCallCreated;
- (void)trackAudioNoteSent;
- (void)trackChatSent;
- (void)trackSavedMediaSent;
- (void)trackSnapSent;
- (void)trackStickerSent;
- (void)trackVideoCallCreated;
- (void)trackVideoNoteSent;
@end

