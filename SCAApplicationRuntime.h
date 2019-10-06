//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCAApplicationRuntime : NSObject <NamedEvent, NSCopying>
{
    NSNumber *fgTimeMs;
    NSNumber *bgTimeMs;
    NSNumber *realTimeMs;
    NSString *bgTimeAttributionMap;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getBgTimeAttributionMap;
- (long long)getBgTimeMs;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFgTimeMs;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getRealTimeMs;
- (void)setBgTimeAttributionMap:(id)arg1;
- (void)setBgTimeMs:(long long)arg1;
- (void)setFgTimeMs:(long long)arg1;
- (void)setRealTimeMs:(long long)arg1;

@end

