//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSubstituteTextAnimationData;

@interface SCFriendsFeedSubstituteTextAnimationData : NSObject <NSCopying>
{
    NSString *_feedId;
    SCSubstituteTextAnimationData *_animationData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSubstituteTextAnimationData *animationData; // @synthesize animationData=_animationData;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (unsigned long long)hash;
- (id)initWithFeedId:(id)arg1 animationData:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

