//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUChatv3SnapStateMessageBuilder : NSObject
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSDictionary *_knownChatSequenceNumbers;
    NSNumber *_mischiefVersion;
    NSNumber *_seqNum;
    NSNumber *_timestamp;
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
    NSString *_chatMessageId;
    NSString *_state;
    NSNumber *_screenshotCount;
    NSString *_senderChatMediaId;
    NSNumber *_openTimestamp;
    NSNumber *_screenCaptureShotCount;
    NSNumber *_screenCaptureRecordingCount;
    NSNumber *_chatMessageSeqNum;
}

+ (id)withJUChatv3SnapStateMessage:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAppEngineTarget:(id)arg1;
- (id)setChatMessageId:(id)arg1;
- (id)setChatMessageSeqNum:(id)arg1;
- (id)setChatMessageSeqNumValue:(long long)arg1;
- (id)setHeader:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setKnownChatSequenceNumbers:(id)arg1;
- (id)setMischiefVersion:(id)arg1;
- (id)setMischiefVersionValue:(long long)arg1;
- (id)setOpenTimestamp:(id)arg1;
- (id)setOpenTimestampValue:(long long)arg1;
- (id)setRetried:(id)arg1;
- (id)setRetriedValue:(_Bool)arg1;
- (id)setScreenCaptureRecordingCount:(id)arg1;
- (id)setScreenCaptureRecordingCountValue:(long long)arg1;
- (id)setScreenCaptureShotCount:(id)arg1;
- (id)setScreenCaptureShotCountValue:(long long)arg1;
- (id)setScreenshotCount:(id)arg1;
- (id)setScreenshotCountValue:(long long)arg1;
- (id)setSenderChatMediaId:(id)arg1;
- (id)setSeqNum:(id)arg1;
- (id)setSeqNumValue:(long long)arg1;
- (id)setState:(id)arg1;
- (id)setStateEnum:(long long)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setTimestampValue:(long long)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;

@end

