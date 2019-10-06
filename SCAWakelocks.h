//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCAWakelocks : NSObject <NamedEvent, NSCopying>
{
    NSNumber *wakelockAcqCount;
    NSNumber *wakelockHeldMs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getWakelockAcqCount;
- (long long)getWakelockHeldMs;
- (void)setWakelockAcqCount:(long long)arg1;
- (void)setWakelockHeldMs:(long long)arg1;

@end
