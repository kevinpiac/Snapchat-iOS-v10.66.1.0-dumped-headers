//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TCV3ParticipantState : NSObject
{
    _Bool _present;
    _Bool _videoFlowing;
    long long _typingState;
    long long _callingState;
    long long _publishedMedia;
    NSString *_videoSinkId;
    long long _mediaIssue;
}

+ (id)ParticipantStateWithPresent:(_Bool)arg1 typingState:(long long)arg2 callingState:(long long)arg3 publishedMedia:(long long)arg4 videoSinkId:(id)arg5 mediaIssue:(long long)arg6 videoFlowing:(_Bool)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long callingState; // @synthesize callingState=_callingState;
- (id)description;
- (id)initWithPresent:(_Bool)arg1 typingState:(long long)arg2 callingState:(long long)arg3 publishedMedia:(long long)arg4 videoSinkId:(id)arg5 mediaIssue:(long long)arg6 videoFlowing:(_Bool)arg7;
@property(readonly, nonatomic) long long mediaIssue; // @synthesize mediaIssue=_mediaIssue;
@property(readonly, nonatomic) _Bool present; // @synthesize present=_present;
@property(readonly, nonatomic) long long publishedMedia; // @synthesize publishedMedia=_publishedMedia;
@property(readonly, nonatomic) long long typingState; // @synthesize typingState=_typingState;
@property(readonly, nonatomic) _Bool videoFlowing; // @synthesize videoFlowing=_videoFlowing;
@property(readonly, nonatomic) NSString *videoSinkId; // @synthesize videoSinkId=_videoSinkId;

@end

