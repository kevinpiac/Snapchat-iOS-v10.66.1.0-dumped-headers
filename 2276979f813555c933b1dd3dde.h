//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class NSNumber;

@interface 2276979f813555c933b1dd3dde : SCAUserNotTrackedEvent
{
    NSNumber *payloadCreationSec;
    NSNumber *payloadCreationObfuscatedSec;
    NSNumber *requestSignedCount;
}

- (void).cxx_destruct;
- (double)78d489be14d865b6a6bd1;
- (id)asDictionary;
- (double)bf62a4ea32820f48dffd9b0df4a0262;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)d3dc43459a20a29c18042;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (void)setPayloadCreationObfuscatedSec:(double)arg1;
- (void)setPayloadCreationSec:(double)arg1;
- (void)setRequestSignedCount:(long long)arg1;

@end
