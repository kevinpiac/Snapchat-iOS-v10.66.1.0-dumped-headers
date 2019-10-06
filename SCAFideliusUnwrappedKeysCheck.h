//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAFideliusUnwrappedKeysCheck : SCAUserTrackedEvent
{
    NSNumber *withMatched;
    NSString *source;
    NSString *failureReason;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFailureReason;
- (double)getPerUserSamplingRate;
- (id)getSource;
- (_Bool)getWithMatched;
- (void)setFailureReason:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setWithMatched:(_Bool)arg1;

@end

