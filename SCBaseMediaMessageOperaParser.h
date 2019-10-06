//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCBaseMediaMessageOperaParser : NSObject
{
}

+ (id)_actionMenuPagePropertiesWithBlur:(_Bool)arg1 isForwardable:(_Bool)arg2;
+ (id)_basePagePropertiesForChatMediaContent:(id)arg1 mediaMetadata:(id)arg2 shouldAutoAdvance:(_Bool)arg3 totalTimeLeft:(id)arg4 totalDuration:(id)arg5 timerShape:(id)arg6 secondsPlayed:(id)arg7 retryInProgress:(_Bool)arg8 controlsEnabled:(_Bool)arg9 thumbnailOptional:(_Bool)arg10;
+ (id)_lensAssetsPropertiesWithLensAssetsId:(id)arg1;
+ (long long)_operaPageLoadingStateFromChatMediaContentLoadState:(long long)arg1;
+ (id)_overlayPropertiesWithOverlayImageId:(id)arg1;
+ (id)_pageChromePropertiesForGalleryCaptureDate:(id)arg1;
+ (id)_pageChromePropertiesForMessage:(id)arg1 sender:(id)arg2 timestamp:(id)arg3;
+ (id)_pagePropertiesForAttachmentUrl:(id)arg1 pageProperties:(id)arg2;
+ (id)_pagePropertiesForAudioStitch:(id)arg1;
+ (id)_pagePropertiesForLensMetadata:(id)arg1 sender:(id)arg2 isGroup:(_Bool)arg3 mediaContent:(id)arg4;
+ (id)_pagePropertiesForLoadedChatMediaContent:(id)arg1 controlsEnabled:(_Bool)arg2 loopingEnabled:(_Bool)arg3;
+ (id)_pagePropertiesForLoadedStorySnapMediaContent:(id)arg1 message:(id)arg2;
+ (id)_pagePropertiesForPendingMediaLoadState:(long long)arg1 retryInProgress:(_Bool)arg2;
+ (id)_pagePropertiesForReplyWithLensWithMessage:(id)arg1 chatMediaContent:(id)arg2 pageProperties:(id)arg3;
+ (id)_pagePropertiesForSavingChat:(id)arg1 savedToMemories:(_Bool)arg2 blur:(_Bool)arg3;
+ (id)_pagePropertiesWithAutoAdvanceTimeSec:(id)arg1;
+ (id)_pagePropertiesWithGifId:(id)arg1;
+ (id)_pagePropertiesWithImageId:(id)arg1 rotationEnabled:(_Bool)arg2;
+ (id)_pagePropertiesWithImageId:(id)arg1 videoURL:(id)arg2 controlsEnabled:(_Bool)arg3 rotationEnabled:(_Bool)arg4 loopingEnabled:(_Bool)arg5;
+ (id)_pagePropertiesWithTimerDuration:(id)arg1 numTotalSegments:(id)arg2 currentSegment:(id)arg3 preventDecay:(_Bool)arg4 timerShape:(id)arg5 autoAdvanceTimeSec:(id)arg6;
+ (id)_pagePropertiesWithTimerDuration:(id)arg1 totalTimeLeft:(id)arg2 totalDuration:(id)arg3 timerShape:(id)arg4 autoAdvanceTimeSec:(id)arg5;
+ (id)_setupAttachmentsViewModelWithSOJUAttachment:(id)arg1 userSession:(id)arg2 pageProperties:(id)arg3;
+ (id)_setupAttachmentsViewModelWithWebAttachmentUrlString:(id)arg1 pageProperties:(id)arg2;
+ (id)_sharedPagePropertiesForChatMediaContent:(id)arg1;
+ (id)_sharedPagePropertiesForStorySnapMediaContent:(id)arg1;
+ (id)_sharedPageTitlePropertiesForStorySnapMediaContent:(id)arg1;
+ (id)loadingPropertiesWithProperties:(id)arg1;
+ (id)retryPropertiesWithProperties:(id)arg1;
+ (id)viewModelForChatMediaContent:(id)arg1 mediaMetadata:(id)arg2 shouldAutoAdvance:(_Bool)arg3 totalTimeLeft:(id)arg4 totalDuration:(id)arg5 timerShape:(id)arg6 secondsPlayed:(id)arg7 retryInProgress:(_Bool)arg8 controlsEnabled:(_Bool)arg9 thumbnailOptional:(_Bool)arg10 message:(id)arg11 userSession:(id)arg12;
+ (id)viewModelForSnapOperaContent:(id)arg1 totalTimeLeft:(id)arg2 totalDuration:(id)arg3 timerShape:(id)arg4 secondsPlayed:(id)arg5 retryInProgress:(_Bool)arg6 message:(id)arg7 userSession:(id)arg8;
+ (id)viewModelForStorySnapMediaContent:(id)arg1 operaPageId:(id)arg2 message:(id)arg3;

@end
