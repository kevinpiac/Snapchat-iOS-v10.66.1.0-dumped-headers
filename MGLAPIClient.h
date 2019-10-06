//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSData, NSString, NSURL, NSURLSession;

@interface MGLAPIClient : NSObject <NSURLSessionDelegate>
{
    _Bool _usesTestServer;
    NSURLSession *_session;
    NSURL *_baseURL;
    NSData *_digicertCert;
    NSData *_geoTrustCert;
    NSData *_testServerCert;
    NSString *_userAgent;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSData *digicertCert; // @synthesize digicertCert=_digicertCert;
- (_Bool)evaluateCertificateWithCertificateData:(id)arg1 keyCount:(long long)arg2 serverTrust:(struct __SecTrust *)arg3 challenge:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) NSData *geoTrustCert; // @synthesize geoTrustCert=_geoTrustCert;
- (id)init;
- (void)loadCertificate:(id *)arg1 withResource:(id)arg2;
- (void)loadCertificates;
- (void)postEvent:(struct NSDictionary *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)postEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestForEvents:(id)arg1;
- (id)serializedDataForEvents:(id)arg1;
@property(copy, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSData *testServerCert; // @synthesize testServerCert=_testServerCert;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) _Bool usesTestServer; // @synthesize usesTestServer=_usesTestServer;
- (void)setupBaseURL;
- (void)setupUserAgent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
