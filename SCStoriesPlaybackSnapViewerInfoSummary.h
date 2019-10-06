//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCStoriesPlaybackSnapViewerInfoSummary : NSObject <NSCopying>
{
    NSArray *_friendViewers;
    long long _friendViewCount;
    long long _friendScreenshotCount;
    NSArray *_otherViewers;
    long long _otherViewCount;
    long long _otherScreenshotCount;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long friendScreenshotCount; // @synthesize friendScreenshotCount=_friendScreenshotCount;
@property(readonly, nonatomic) long long friendViewCount; // @synthesize friendViewCount=_friendViewCount;
@property(readonly, copy, nonatomic) NSArray *friendViewers; // @synthesize friendViewers=_friendViewers;
- (unsigned long long)hash;
- (id)initWithFriendViewers:(id)arg1 friendViewCount:(long long)arg2 friendScreenshotCount:(long long)arg3 otherViewers:(id)arg4 otherViewCount:(long long)arg5 otherScreenshotCount:(long long)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long otherScreenshotCount; // @synthesize otherScreenshotCount=_otherScreenshotCount;
@property(readonly, nonatomic) long long otherViewCount; // @synthesize otherViewCount=_otherViewCount;
@property(readonly, copy, nonatomic) NSArray *otherViewers; // @synthesize otherViewers=_otherViewers;

@end
