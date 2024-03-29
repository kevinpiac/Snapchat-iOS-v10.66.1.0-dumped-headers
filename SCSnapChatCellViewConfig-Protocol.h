//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, UIImage;

@protocol SCSnapChatCellViewConfig <NSObject>
- (NSAttributedString *)attributedActionText;
- (NSAttributedString *)attributedTextForReplayNotificationLabel;
- (NSAttributedString *)attributedTextForScreenRecordingNotificationLabel;
- (NSAttributedString *)attributedTextForScreenshotNotificationLabel;
- (double)replayNotificationLabelHeight;
- (double)screenshotNotificationLabelHeight;
- (_Bool)shouldRecognizeLongPress;
- (_Bool)shouldRecognizeTap;
- (_Bool)shouldShowActivity;
- (_Bool)shouldShowReplayNotificationLabel;
- (_Bool)shouldShowScreenRecordingNotificationLabel;
- (_Bool)shouldShowScreenshotNotificationLabel;
- (_Bool)shouldShowTimer;
- (UIImage *)statusIconImage;
- (NSString *)subLabelText;
- (unsigned long long)timerCountDownValue;
@end

