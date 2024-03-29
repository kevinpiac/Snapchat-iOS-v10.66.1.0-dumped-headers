//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAProfileMyContactsSearchPerform : SCAUserTrackedEvent
{
    NSNumber *charCount;
    NSNumber *keystrokeCount;
    NSNumber *contactFoundCount;
    NSNumber *nonSnapchatterCount;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCharCount;
- (long long)getContactFoundCount;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getKeystrokeCount;
- (long long)getNonSnapchatterCount;
- (double)getPerUserSamplingRate;
- (void)setCharCount:(long long)arg1;
- (void)setContactFoundCount:(long long)arg1;
- (void)setKeystrokeCount:(long long)arg1;
- (void)setNonSnapchatterCount:(long long)arg1;

@end

