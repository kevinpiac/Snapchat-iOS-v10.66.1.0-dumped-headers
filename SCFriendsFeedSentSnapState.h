//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCFriendsFeedSentSnapState : NSObject <NSCopying>
{
    _Bool _isOpened;
    _Bool _isReplayed;
    _Bool _isScreenshotted;
    _Bool _isScreenRecorded;
    NSString *_snapId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSnapId:(id)arg1 isOpened:(_Bool)arg2 isReplayed:(_Bool)arg3 isScreenshotted:(_Bool)arg4 isScreenRecorded:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(readonly, nonatomic) _Bool isReplayed; // @synthesize isReplayed=_isReplayed;
@property(readonly, nonatomic) _Bool isScreenRecorded; // @synthesize isScreenRecorded=_isScreenRecorded;
@property(readonly, nonatomic) _Bool isScreenshotted; // @synthesize isScreenshotted=_isScreenshotted;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;

@end

