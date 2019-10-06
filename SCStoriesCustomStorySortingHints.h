//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoriesCustomStorySortingHints : NSObject <NSCopying>
{
    _Bool _isFirstDegreeFriend;
    double _mostRecentPostTimestamp;
    double _myMostRecentPostTimestamp;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithIsFirstDegreeFriend:(_Bool)arg1 mostRecentPostTimestamp:(double)arg2 myMostRecentPostTimestamp:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isFirstDegreeFriend; // @synthesize isFirstDegreeFriend=_isFirstDegreeFriend;
@property(readonly, nonatomic) double mostRecentPostTimestamp; // @synthesize mostRecentPostTimestamp=_mostRecentPostTimestamp;
@property(readonly, nonatomic) double myMostRecentPostTimestamp; // @synthesize myMostRecentPostTimestamp=_myMostRecentPostTimestamp;

@end
