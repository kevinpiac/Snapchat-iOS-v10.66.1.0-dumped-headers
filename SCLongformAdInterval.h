//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SCLongformAdInterval : NSObject <NSCopying, NSCoding>
{
    double _startTime;
    NSString *_snapId;
    NSData *_adPlacementMetadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *adPlacementMetadata; // @synthesize adPlacementMetadata=_adPlacementMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTime:(double)arg1 snapId:(id)arg2 adPlacementMetadata:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;

@end

