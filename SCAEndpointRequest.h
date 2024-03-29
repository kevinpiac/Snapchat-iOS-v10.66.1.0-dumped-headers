//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCAEndpointRequest : NSObject <NamedEvent, NSCopying>
{
    NSNumber *requestRoundTripMs;
    NSNumber *responseStatusCode;
    NSNumber *requestSuccess;
    NSString *requestUrl;
    NSString *requestHost;
    NSString *requestId;
    NSString *errorDescription;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getErrorDescription;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getRequestHost;
- (id)getRequestId;
- (long long)getRequestRoundTripMs;
- (_Bool)getRequestSuccess;
- (id)getRequestUrl;
- (long long)getResponseStatusCode;
- (void)setErrorDescription:(id)arg1;
- (void)setRequestHost:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setRequestRoundTripMs:(long long)arg1;
- (void)setRequestSuccess:(_Bool)arg1;
- (void)setRequestUrl:(id)arg1;
- (void)setResponseStatusCode:(long long)arg1;

@end

