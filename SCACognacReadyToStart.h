//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACognacActionEventBase.h"

@class NSNumber, NSString;

@interface SCACognacReadyToStart : SCACognacActionEventBase
{
    NSNumber *loadTimeSec;
    long long source;
    NSString *webviewUserAgent;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getLoadTimeSec;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (id)getWebviewUserAgent;
- (id)init;
- (void)setLoadTimeSec:(double)arg1;
- (void)setSource:(long long)arg1;
- (void)setWebviewUserAgent:(id)arg1;

@end

