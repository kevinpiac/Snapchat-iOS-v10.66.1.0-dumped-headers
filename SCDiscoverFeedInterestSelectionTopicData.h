//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedStoryLoggingInfo;

@interface SCDiscoverFeedInterestSelectionTopicData : NSObject <NSCopying, NSCoding>
{
    NSString *_topicId;
    NSString *_topicDisplayText;
    NSString *_topicThumbnailUrl;
    SCDiscoverFeedStoryLoggingInfo *_dfLoggingInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *dfLoggingInfo; // @synthesize dfLoggingInfo=_dfLoggingInfo;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopicId:(id)arg1 topicDisplayText:(id)arg2 topicThumbnailUrl:(id)arg3 dfLoggingInfo:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *topicDisplayText; // @synthesize topicDisplayText=_topicDisplayText;
@property(readonly, copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(readonly, copy, nonatomic) NSString *topicThumbnailUrl; // @synthesize topicThumbnailUrl=_topicThumbnailUrl;

@end

