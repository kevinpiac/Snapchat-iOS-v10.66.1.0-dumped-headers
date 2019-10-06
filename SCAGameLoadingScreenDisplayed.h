//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACognacActionEventBase.h"

@class NSNumber;

@interface SCAGameLoadingScreenDisplayed : SCACognacActionEventBase
{
    NSNumber *displayTime;
    NSNumber *success;
    long long source;
    long long mediaType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getDisplayTime;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (_Bool)getSuccess;
- (id)init;
- (void)setDisplayTime:(double)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setSuccess:(_Bool)arg1;

@end

