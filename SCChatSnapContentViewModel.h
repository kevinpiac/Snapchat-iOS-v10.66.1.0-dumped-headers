//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCSnapChatCellViewConfig-Protocol.h"
#import "SCSnapReplayConfig-Protocol.h"

@class NSAttributedString, NSString, SCActionModel, SCChatReplayAnimationData, SCChatSnapCountDownAnimationData, UIImage;

@interface SCChatSnapContentViewModel : NSObject <SCSnapChatCellViewConfig, SCSnapReplayConfig, NSCopying>
{
    _Bool _showActivitySpinner;
    NSAttributedString *_attributedSnapActionText;
    NSAttributedString *_attributedReplayNotificationText;
    NSAttributedString *_attributedScreenshotNotificationText;
    NSAttributedString *_attributedScreenRecordingNotificationText;
    NSString *_subLabelText;
    UIImage *_snapIconImage;
    double _snapMediaCardHeight;
    double _screenshotNotificationLabelHeight;
    double _replayNotificationLabelHeight;
    NSString *_thumbnailIdentifier;
    SCChatReplayAnimationData *_replayAnimationData;
    SCChatSnapCountDownAnimationData *_countDownAnimationData;
    SCActionModel *_tapAction;
    SCActionModel *_longPressAction;
}

- (void).cxx_destruct;
- (id)attributedActionText;
@property(readonly, copy, nonatomic) NSAttributedString *attributedReplayNotificationText; // @synthesize attributedReplayNotificationText=_attributedReplayNotificationText;
@property(readonly, copy, nonatomic) NSAttributedString *attributedScreenRecordingNotificationText; // @synthesize attributedScreenRecordingNotificationText=_attributedScreenRecordingNotificationText;
@property(readonly, copy, nonatomic) NSAttributedString *attributedScreenshotNotificationText; // @synthesize attributedScreenshotNotificationText=_attributedScreenshotNotificationText;
@property(readonly, copy, nonatomic) NSAttributedString *attributedSnapActionText; // @synthesize attributedSnapActionText=_attributedSnapActionText;
- (id)attributedTextForReplayNotificationLabel;
- (id)attributedTextForScreenRecordingNotificationLabel;
- (id)attributedTextForScreenshotNotificationLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCChatSnapCountDownAnimationData *countDownAnimationData; // @synthesize countDownAnimationData=_countDownAnimationData;
@property(readonly) unsigned long long hash;
- (id)initWithAttributedSnapActionText:(id)arg1 attributedReplayNotificationText:(id)arg2 attributedScreenshotNotificationText:(id)arg3 attributedScreenRecordingNotificationText:(id)arg4 subLabelText:(id)arg5 snapIconImage:(id)arg6 snapMediaCardHeight:(double)arg7 screenshotNotificationLabelHeight:(double)arg8 replayNotificationLabelHeight:(double)arg9 showActivitySpinner:(_Bool)arg10 thumbnailIdentifier:(id)arg11 replayAnimationData:(id)arg12 countDownAnimationData:(id)arg13 tapAction:(id)arg14 longPressAction:(id)arg15;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *longPressAction; // @synthesize longPressAction=_longPressAction;
@property(readonly, copy, nonatomic) SCChatReplayAnimationData *replayAnimationData; // @synthesize replayAnimationData=_replayAnimationData;
- (id)replayIconImage;
@property(readonly, nonatomic) double replayNotificationLabelHeight; // @synthesize replayNotificationLabelHeight=_replayNotificationLabelHeight;
@property(readonly, nonatomic) double screenshotNotificationLabelHeight; // @synthesize screenshotNotificationLabelHeight=_screenshotNotificationLabelHeight;
- (void)setSnapReplayAnimationState:(long long)arg1;
- (_Bool)shouldDisplayReplayAnimation;
- (_Bool)shouldRecognizeLongPress;
- (_Bool)shouldRecognizeTap;
- (_Bool)shouldShowActivity;
- (_Bool)shouldShowReplayNotificationLabel;
- (_Bool)shouldShowScreenRecordingNotificationLabel;
- (_Bool)shouldShowScreenshotNotificationLabel;
- (_Bool)shouldShowTimer;
@property(readonly, nonatomic) _Bool showActivitySpinner; // @synthesize showActivitySpinner=_showActivitySpinner;
@property(readonly, copy, nonatomic) UIImage *snapIconImage; // @synthesize snapIconImage=_snapIconImage;
@property(readonly, nonatomic) double snapMediaCardHeight; // @synthesize snapMediaCardHeight=_snapMediaCardHeight;
- (id)statusIconImage;
@property(readonly, copy, nonatomic) NSString *subLabelText; // @synthesize subLabelText=_subLabelText;
@property(readonly, copy, nonatomic) SCActionModel *tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, copy, nonatomic) NSString *thumbnailIdentifier; // @synthesize thumbnailIdentifier=_thumbnailIdentifier;
- (unsigned long long)timerCountDownValue;
- (long long)viewType;
- (id)viewedIconImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

