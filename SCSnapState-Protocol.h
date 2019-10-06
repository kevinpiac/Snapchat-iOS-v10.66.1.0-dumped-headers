//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString;

@protocol SCSnapState <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool canBeReplayed;
@property(readonly, nonatomic) _Bool isFirstSnapInStack;
@property(readonly, copy, nonatomic) NSDate *lastOpenedTimestamp;
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) long long replayAnimationState;
@property(readonly, copy, nonatomic) NSDictionary *replayState;
@property(readonly, copy, nonatomic) NSDictionary *screenCaptureRecordingState;
@property(readonly, copy, nonatomic) NSDictionary *screenCaptureShotState;
@property(readonly, copy, nonatomic) NSDictionary *screenshotState;
@property(readonly, copy, nonatomic) NSString *stackId;
@property(readonly, copy, nonatomic) NSDictionary *viewedTimestamps;
@end

