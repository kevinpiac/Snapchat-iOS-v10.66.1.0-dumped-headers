//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCTChatPresencePill.h"

@class SCTPresenceTypingBubbleView, UIView;

@interface SCTDirectChatPresencePill : SCTChatPresencePill
{
    UIView *_smileyEmojiView;
    SCTPresenceTypingBubbleView *_typingBubbleView;
}

- (void).cxx_destruct;
- (void)_animateBecomingAbsentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateBecomingPresenceToMediaMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateContractionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateEmergenceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateExpansionToMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateMediaToBitmojiWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateMediaToBlueDotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateMediaTransitionToMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateSelectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateToTypingState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_avatarNeededForState:(id)arg1;
- (struct SCTPresenceBitmojiState)_bitmojiStateForState:(id)arg1;
- (void)_createTypingBubbleViewIfNeeded;
- (void)_didLoadAvatarView;
- (id)_loadSmileyEmojiView;
- (double)_pillHeightForState:(id)arg1;
- (double)_pillWidthForState:(id)arg1;
- (void)_resetBitmojiLayout;
- (void)_updateColors;
- (void)_updateTypingIndicator;
- (void)_updateTypingIndicatorConstraintsWithProgress:(double)arg1;
- (void)_updateUIForMediaMode:(unsigned long long)arg1;
- (void)_updateUIForModeAudio;
- (void)_updateUIForModeNoCall;
- (void)_updateUIForModeVideo;
- (void)animateAvatarUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)needsAvatarUpdate;
- (void)updateLabelText;

@end
