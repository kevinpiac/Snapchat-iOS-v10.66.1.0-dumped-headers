//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCACaptionCarouselSessionEnd : SCAUserTrackedEvent
{
    NSNumber *captionFontLoadingDelay;
    NSNumber *captionViewCount;
    NSNumber *withCaptionResize;
    NSNumber *withCaptionColorPick;
    NSNumber *withCaption;
    NSNumber *withTag;
    NSNumber *tagModeFromTypingCount;
    NSNumber *tagModeFromButtonCount;
    NSNumber *tagModeFromStickerCount;
    NSNumber *tagSelectCount;
    long long captionExitSource;
    NSString *captionAddTapPosition;
    NSString *captionViewList;
    NSString *captureSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCaptionAddTapPosition;
- (long long)getCaptionExitSource;
- (double)getCaptionFontLoadingDelay;
- (long long)getCaptionViewCount;
- (id)getCaptionViewList;
- (id)getCaptureSessionId;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getTagModeFromButtonCount;
- (long long)getTagModeFromStickerCount;
- (long long)getTagModeFromTypingCount;
- (long long)getTagSelectCount;
- (_Bool)getWithCaption;
- (_Bool)getWithCaptionColorPick;
- (_Bool)getWithCaptionResize;
- (_Bool)getWithTag;
- (id)init;
- (void)setCaptionAddTapPosition:(id)arg1;
- (void)setCaptionExitSource:(long long)arg1;
- (void)setCaptionFontLoadingDelay:(double)arg1;
- (void)setCaptionViewCount:(long long)arg1;
- (void)setCaptionViewList:(id)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setTagModeFromButtonCount:(long long)arg1;
- (void)setTagModeFromStickerCount:(long long)arg1;
- (void)setTagModeFromTypingCount:(long long)arg1;
- (void)setTagSelectCount:(long long)arg1;
- (void)setWithCaption:(_Bool)arg1;
- (void)setWithCaptionColorPick:(_Bool)arg1;
- (void)setWithCaptionResize:(_Bool)arg1;
- (void)setWithTag:(_Bool)arg1;

@end

