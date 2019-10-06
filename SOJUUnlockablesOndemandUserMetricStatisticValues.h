//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandUserMetricStatisticValues-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandUserMetricStatisticValues : NSObject <SOJUUnlockablesOndemandUserMetricStatisticValues>
{
    NSString *_statistic;
    NSNumber *_value;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)stringForUsageMetricType:(long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithStatistic:(id)arg1 value:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *statistic; // @synthesize statistic=_statistic;
- (long long)statisticEnum;
- (id)toDictionary;
- (id)toJson;
- (long long)usageMetricType;
@property(readonly, copy, nonatomic) NSNumber *value; // @synthesize value=_value;
- (double)valueValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

