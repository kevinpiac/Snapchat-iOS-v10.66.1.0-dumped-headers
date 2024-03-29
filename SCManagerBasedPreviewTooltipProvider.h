//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewTooltipProvider-Protocol.h"

@class NSString, SCUserSession;

@interface SCManagerBasedPreviewTooltipProvider : NSObject <SCPreviewTooltipProvider>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (_Bool)_shouldDisplayHelpLabelWithCaptionHelp;
- (_Bool)_shouldDisplayHelpLabelWithSwipeHelp;
- (id)accessibilityIdentifier;
- (double)helpLabelCornerRadius;
- (struct CGSize)helpLabelFrameSize;
- (id)initWithUserSession:(id)arg1;
- (double)initialAlpha;
- (double)initialTransformScale;
- (id)labelText;
- (void)setDisplayedAnimatedTooltip;
- (void)setDisplayedBounceTeachingTooltip;
- (void)setDisplayedCropToolTooltip;
- (void)setDisplayedGiphyStickerTooltip;
- (void)setDisplayedTrackingCaptionTooltip;
- (void)setDisplayedUnlockableStickerTooltip;
- (void)setDisplayedVenueStickerStyleTooltip;
- (void)setDisplayedVenueStickerTooltip;
- (_Bool)shouldDisplayAnimatedTooltip;
- (_Bool)shouldDisplayAutoCreativeFilterTooltip;
- (_Bool)shouldDisplayBounceTeachingTooltip;
- (_Bool)shouldDisplayCaptionHelp;
- (_Bool)shouldDisplayCropToolTooltip;
- (_Bool)shouldDisplayGiphyStickerTooltip;
- (_Bool)shouldDisplayHelpLabel;
- (_Bool)shouldDisplayTrackingCaptionTooltip;
- (_Bool)shouldDisplayUnlockableStickerTooltip;
- (_Bool)shouldDisplayUnlockedStickerPackagesTooltip;
- (_Bool)shouldDisplayVenueStickerStyleTooltip;
- (_Bool)shouldDisplayVenueStickerTooltip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

