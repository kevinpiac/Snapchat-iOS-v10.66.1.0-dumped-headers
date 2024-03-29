//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADLUserStateChangedEvent : NSObject
{
    _Bool _isConnected;
    _Bool _audioPublished;
    _Bool _videoPublished;
    NSString *_scopeId;
    long long _userId;
    long long _mediaType;
    NSString *_videoSinkId;
}

+ (id)UserStateChangedEventWithScopeId:(id)arg1 userId:(long long)arg2 isConnected:(_Bool)arg3 mediaType:(long long)arg4 audioPublished:(_Bool)arg5 videoPublished:(_Bool)arg6 videoSinkId:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool audioPublished; // @synthesize audioPublished=_audioPublished;
- (id)description;
- (id)initWithScopeId:(id)arg1 userId:(long long)arg2 isConnected:(_Bool)arg3 mediaType:(long long)arg4 audioPublished:(_Bool)arg5 videoPublished:(_Bool)arg6 videoSinkId:(id)arg7;
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
@property(readonly, nonatomic) long long userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) _Bool videoPublished; // @synthesize videoPublished=_videoPublished;
@property(readonly, nonatomic) NSString *videoSinkId; // @synthesize videoSinkId=_videoSinkId;

@end

