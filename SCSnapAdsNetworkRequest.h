//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SCSnapAdsIdentifier;

@interface SCSnapAdsNetworkRequest : NSObject
{
    _Bool _isPrimaryRequest;
    _Bool _serialize;
    SCSnapAdsIdentifier *_snapAdsId;
    NSString *_adType;
    unsigned long long _requestType;
    long long _format;
    unsigned long long _adProductType;
    NSString *_url;
    NSString *_retryUrl;
    NSString *_userAgent;
    NSDictionary *_overrideHeaders;
    long long _type;
    NSObject *_body;
    long long _retroType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
@property(readonly, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) NSObject *body; // @synthesize body=_body;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
- (id)getBody;
- (id)getOverrideHeaders;
- (id)getRetryUrl;
- (long long)getType;
- (id)getUrl;
- (id)getUserAgent;
- (id)initWithUrl:(id)arg1 retryUrl:(id)arg2 userAgent:(id)arg3 adRequestType:(long long)arg4 overrideHeaders:(id)arg5 body:(id)arg6 serialize:(_Bool)arg7 retroType:(long long)arg8 snapAdsId:(id)arg9 adType:(id)arg10 requestType:(unsigned long long)arg11 isPrimaryRequest:(_Bool)arg12 requestFormat:(long long)arg13 adProductType:(unsigned long long)arg14;
- (id)initWithUrl:(id)arg1 userAgent:(id)arg2 adRequestType:(long long)arg3 overrideHeaders:(id)arg4 body:(id)arg5 serialize:(_Bool)arg6 retroType:(long long)arg7;
- (id)initWithUrl:(id)arg1 userAgent:(id)arg2 adRequestType:(long long)arg3 overrideHeaders:(id)arg4 body:(id)arg5 serialize:(_Bool)arg6 retroType:(long long)arg7 isPrimaryRequest:(_Bool)arg8 adProductType:(unsigned long long)arg9;
- (id)initWithUrl:(id)arg1 userAgent:(id)arg2 adRequestType:(long long)arg3 overrideHeaders:(id)arg4 body:(id)arg5 serialize:(_Bool)arg6 retroType:(long long)arg7 snapAdsId:(id)arg8 adType:(id)arg9 requestType:(unsigned long long)arg10 isPrimaryRequest:(_Bool)arg11 requestFormat:(long long)arg12 adProductType:(unsigned long long)arg13;
@property(readonly, nonatomic) _Bool isPrimaryRequest; // @synthesize isPrimaryRequest=_isPrimaryRequest;
@property(readonly, copy, nonatomic) NSDictionary *overrideHeaders; // @synthesize overrideHeaders=_overrideHeaders;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) long long retroType; // @synthesize retroType=_retroType;
@property(readonly, copy, nonatomic) NSString *retryUrl; // @synthesize retryUrl=_retryUrl;
@property(readonly, nonatomic) _Bool serialize; // @synthesize serialize=_serialize;
- (_Bool)shouldSerializeRequest;
@property(readonly, nonatomic) SCSnapAdsIdentifier *snapAdsId; // @synthesize snapAdsId=_snapAdsId;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)updateBody:(id)arg1;
- (void)updateRetroType:(long long)arg1;
- (void)updateUrl:(id)arg1;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;

@end
