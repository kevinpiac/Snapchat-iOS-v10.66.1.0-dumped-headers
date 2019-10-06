//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCShowEpisodeWatchedState : SCDocObject <NSCopying>
{
    _Bool _fullyViewed;
    _Bool _committedToServer;
    int _lastWatchedSnapProgressMs;
    int _approximateProgress;
    NSString *_episodeId;
    NSString *_showId;
    NSString *_lastWatchedSnapId;
    unsigned long long _clientTimestampMs;
    unsigned long long _cacheWriteTimestampMs;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
@property(readonly, nonatomic) int approximateProgress; // @synthesize approximateProgress=_approximateProgress;
@property(readonly, nonatomic) unsigned long long cacheWriteTimestampMs; // @synthesize cacheWriteTimestampMs=_cacheWriteTimestampMs;
@property(readonly, nonatomic) unsigned long long clientTimestampMs; // @synthesize clientTimestampMs=_clientTimestampMs;
@property(readonly, nonatomic) _Bool committedToServer; // @synthesize committedToServer=_committedToServer;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *episodeId; // @synthesize episodeId=_episodeId;
@property(readonly, nonatomic) _Bool fullyViewed; // @synthesize fullyViewed=_fullyViewed;
- (unsigned long long)hash;
- (id)initWithEpisodeId:(id)arg1 showId:(id)arg2 fullyViewed:(_Bool)arg3 lastWatchedSnapId:(id)arg4 lastWatchedSnapProgressMs:(int)arg5 approximateProgress:(int)arg6 clientTimestampMs:(unsigned long long)arg7 committedToServer:(_Bool)arg8 cacheWriteTimestampMs:(unsigned long long)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lastWatchedSnapId; // @synthesize lastWatchedSnapId=_lastWatchedSnapId;
@property(readonly, nonatomic) int lastWatchedSnapProgressMs; // @synthesize lastWatchedSnapProgressMs=_lastWatchedSnapProgressMs;
@property(readonly, copy, nonatomic) NSString *showId; // @synthesize showId=_showId;

@end

