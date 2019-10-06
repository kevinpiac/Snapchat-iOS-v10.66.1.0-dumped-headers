//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCANetworkCondition : NSObject <NamedEvent, NSCopying>
{
    NSNumber *bandwidthMean;
    NSNumber *bandwidthMedian;
    NSNumber *bandwidthSampleSize;
    long long connectionClass;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getBandwidthMean;
- (double)getBandwidthMedian;
- (long long)getBandwidthSampleSize;
- (long long)getConnectionClass;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setBandwidthMean:(double)arg1;
- (void)setBandwidthMedian:(double)arg1;
- (void)setBandwidthSampleSize:(long long)arg1;
- (void)setConnectionClass:(long long)arg1;

@end

