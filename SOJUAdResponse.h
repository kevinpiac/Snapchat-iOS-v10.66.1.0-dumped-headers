//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdResponse-Protocol.h"

@class NSNumber, NSString, SOJUAdClientRankingModel, SOJUAdErrorResponse, SOJUAdTfModelInfo, SOJUAdTfRankingModel;

@interface SOJUAdResponse : NSObject <SOJUAdResponse>
{
    NSString *_requestId;
    NSString *_rawAdData;
    NSString *_responseJson;
    NSString *_waterfall;
    SOJUAdErrorResponse *_error;
    NSString *_trackUrl;
    SOJUAdClientRankingModel *_clientRankingModel;
    SOJUAdTfRankingModel *_tfRankingModel;
    SOJUAdTfModelInfo *_tfModelInfo;
    NSNumber *_shouldPrefetchWebView;
    NSString *_trackAndGetUrl;
    NSString *_jsonTrackUrl;
    NSString *_protoTrackUrl;
    NSString *_batchTrackUrl;
    NSString *_adRenderData;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adRenderData; // @synthesize adRenderData=_adRenderData;
@property(readonly, copy, nonatomic) NSString *batchTrackUrl; // @synthesize batchTrackUrl=_batchTrackUrl;
@property(readonly, copy, nonatomic) SOJUAdClientRankingModel *clientRankingModel; // @synthesize clientRankingModel=_clientRankingModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUAdErrorResponse *error; // @synthesize error=_error;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithRequestId:(id)arg1 rawAdData:(id)arg2 responseJson:(id)arg3 waterfall:(id)arg4 error:(id)arg5 trackUrl:(id)arg6 clientRankingModel:(id)arg7 tfRankingModel:(id)arg8 tfModelInfo:(id)arg9 shouldPrefetchWebView:(id)arg10 trackAndGetUrl:(id)arg11 jsonTrackUrl:(id)arg12 protoTrackUrl:(id)arg13 batchTrackUrl:(id)arg14 adRenderData:(id)arg15;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *jsonTrackUrl; // @synthesize jsonTrackUrl=_jsonTrackUrl;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *protoTrackUrl; // @synthesize protoTrackUrl=_protoTrackUrl;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *responseJson; // @synthesize responseJson=_responseJson;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *shouldPrefetchWebView; // @synthesize shouldPrefetchWebView=_shouldPrefetchWebView;
- (_Bool)shouldPrefetchWebViewValue;
@property(readonly, copy, nonatomic) SOJUAdTfModelInfo *tfModelInfo; // @synthesize tfModelInfo=_tfModelInfo;
@property(readonly, copy, nonatomic) SOJUAdTfRankingModel *tfRankingModel; // @synthesize tfRankingModel=_tfRankingModel;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *trackAndGetUrl; // @synthesize trackAndGetUrl=_trackAndGetUrl;
@property(readonly, copy, nonatomic) NSString *trackUrl; // @synthesize trackUrl=_trackUrl;
@property(readonly, copy, nonatomic) NSString *waterfall; // @synthesize waterfall=_waterfall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

