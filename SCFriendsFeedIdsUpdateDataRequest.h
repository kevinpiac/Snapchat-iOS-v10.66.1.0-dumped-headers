//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSSet;

@interface SCFriendsFeedIdsUpdateDataRequest : NSObject <NSCopying>
{
    NSSet *_updatedFeedIds;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUpdatedFeedIds:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *updatedFeedIds; // @synthesize updatedFeedIds=_updatedFeedIds;

@end

