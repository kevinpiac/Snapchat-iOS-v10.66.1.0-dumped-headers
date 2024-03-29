//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCheckInActionmojiOption : NSObject <NSCopying>
{
    _Bool _hasShadow;
    NSString *_actionId;
    NSString *_nonClusteredStickerId;
    NSString *_clusteredFacingLeftStickerId;
    NSString *_clusteredFacingRightStickerId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
@property(readonly, copy, nonatomic) NSString *clusteredFacingLeftStickerId; // @synthesize clusteredFacingLeftStickerId=_clusteredFacingLeftStickerId;
@property(readonly, copy, nonatomic) NSString *clusteredFacingRightStickerId; // @synthesize clusteredFacingRightStickerId=_clusteredFacingRightStickerId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
- (unsigned long long)hash;
- (id)initWithActionId:(id)arg1 nonClusteredStickerId:(id)arg2 clusteredFacingLeftStickerId:(id)arg3 clusteredFacingRightStickerId:(id)arg4 hasShadow:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *nonClusteredStickerId; // @synthesize nonClusteredStickerId=_nonClusteredStickerId;

@end

