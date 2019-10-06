//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSnapStateByParticipant : NSObject <NSCopying>
{
    BOOL _screenCaptureType;
    BOOL _replayState;
    NSString *_participant;
    double _viewedTimestampInEpochSecs;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithParticipant:(id)arg1 viewedTimestampInEpochSecs:(double)arg2 screenCaptureType:(BOOL)arg3 replayState:(BOOL)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
@property(readonly, nonatomic) BOOL replayState; // @synthesize replayState=_replayState;
@property(readonly, nonatomic) BOOL screenCaptureType; // @synthesize screenCaptureType=_screenCaptureType;
@property(readonly, nonatomic) double viewedTimestampInEpochSecs; // @synthesize viewedTimestampInEpochSecs=_viewedTimestampInEpochSecs;

@end
