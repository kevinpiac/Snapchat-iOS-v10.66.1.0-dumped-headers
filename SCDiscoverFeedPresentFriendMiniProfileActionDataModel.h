//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedStoryLoggingInfo;

@interface SCDiscoverFeedPresentFriendMiniProfileActionDataModel : NSObject <NSCopying>
{
    NSString *_username;
    SCDiscoverFeedStoryLoggingInfo *_loggingInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUsername:(id)arg1 loggingInfo:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

