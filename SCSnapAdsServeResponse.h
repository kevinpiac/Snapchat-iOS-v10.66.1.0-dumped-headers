//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, SCAdResponseAdDataV2, SCSnapAdsIdentifier;

@interface SCSnapAdsServeResponse : NSObject
{
    SCSnapAdsIdentifier *_adIdentifier;
    NSString *_serverRequestId;
    NSString *_rawUserData;
    NSString *_rawAdData;
    NSString *_trackUrl;
    SCAdResponseAdDataV2 *_adResponse;
    NSString *_contentStreamId;
    NSString *_sessionTargetingString;
    NSDictionary *_targeting;
    NSString *_protoTrackUrl;
    NSString *_sojuTrackUrl;
    NSData *_viewReceipt;
    double _resolvedTimestamp;
    long long _trackSequenceNumber;
    NSArray *_thirdPartyImpressionTrackURLs;
    NSArray *_thirdPartyImpressionClickURLs;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(readonly, nonatomic) SCAdResponseAdDataV2 *adResponse; // @synthesize adResponse=_adResponse;
@property(readonly, copy, nonatomic) NSString *contentStreamId; // @synthesize contentStreamId=_contentStreamId;
- (long long)getAndIncrementTrackSequenceNumber;
- (id)initWithAdIdentifier:(id)arg1;
- (id)initWithAdIdentifier:(id)arg1 serveRequestId:(id)arg2 rawUserData:(id)arg3 rawAdData:(id)arg4 trackUrl:(id)arg5 adResponse:(id)arg6 targeting:(id)arg7 contentStreamId:(id)arg8 sessionTargetingString:(id)arg9 protoTrackUrl:(id)arg10 sojuTrackUrl:(id)arg11 viewReceipt:(id)arg12 thirdPartyImpressionTrackURLs:(id)arg13 thirdPartyImpressionClickURLs:(id)arg14 resolvedTimestamp:(double)arg15;
@property(readonly, copy, nonatomic) NSString *protoTrackUrl; // @synthesize protoTrackUrl=_protoTrackUrl;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
@property(readonly, nonatomic) double resolvedTimestamp; // @synthesize resolvedTimestamp=_resolvedTimestamp;
@property(readonly, copy, nonatomic) NSString *serverRequestId; // @synthesize serverRequestId=_serverRequestId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *sessionTargetingString; // @synthesize sessionTargetingString=_sessionTargetingString;
@property(readonly, copy, nonatomic) NSString *sojuTrackUrl; // @synthesize sojuTrackUrl=_sojuTrackUrl;
@property(readonly, copy, nonatomic) NSDictionary *targeting; // @synthesize targeting=_targeting;
@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionClickURLs; // @synthesize thirdPartyImpressionClickURLs=_thirdPartyImpressionClickURLs;
@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionTrackURLs; // @synthesize thirdPartyImpressionTrackURLs=_thirdPartyImpressionTrackURLs;
@property(readonly, nonatomic) long long trackSequenceNumber; // @synthesize trackSequenceNumber=_trackSequenceNumber;
- (long long)trackSequenceNumberWithSessionId:(id)arg1;
@property(readonly, copy, nonatomic) NSString *trackUrl; // @synthesize trackUrl=_trackUrl;
@property(readonly, copy, nonatomic) NSData *viewReceipt; // @synthesize viewReceipt=_viewReceipt;

@end

