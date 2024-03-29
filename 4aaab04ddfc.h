//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseAPIClient.h"

@class NSDateFormatter, NSURL;

@interface 4aaab04ddfc : SCBaseAPIClient
{
    NSURL *_defaultBaseURL;
    double _loggingRate;
    NSDateFormatter *_dateFormatter;
}

+ (void)addListener:(id)arg1;
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
+ (void)apiClientDidFinishRequest:(id)arg1 response:(id)arg2 parameters:(id)arg3;
+ (id)defaultAuthServiceUrl;
+ (id)defaultSnapConnectUrl;
+ (id)defaultSnaptokenUrl;
+ (id)defaultUrl;
+ (id)getCarrierMCC;
+ (id)getCarrierMNC;
+ (id)getCarrierName;
+ (id)getConnectionType;
+ (void)initialize;
+ (_Bool)isDevAuthService;
+ (_Bool)isDevSnapConnect;
+ (_Bool)isDevSnapchat;
+ (void)removeListener:(id)arg1;
+ (id)sharedAuthServiceClient;
+ (id)sharedClient;
+ (id)sharedSnapConnectClient;
+ (id)sharedSnaptokenClient;
+ (void)showAlertAndWaitForDismissalWithUrl:(id)arg1;
+ (id)updateSharedAuthServiceClientWithUrl:(id)arg1;
+ (id)updateSharedClientWithUrl:(id)arg1;
+ (id)updateSharedSnapConnectClientWithUrl:(id)arg1;
+ (id)updateSharedSnaptokenClientWithUrl:(id)arg1;
- (void).cxx_destruct;
- (id)0b5e95e933f5e5bdd:(id)arg1 344:(id)arg2 c65ea81167:(id)arg3 2952c10530cc9:(_Bool)arg4;
- (void)54e912960d9e11a2ad0:(id)arg1 d6c6:(id)arg2 025f1a44d1:(id)arg3;
- (id)75ef235d55b1bae1a83a1bf4894a08:(id)arg1 a172:(id)arg2 ff4787c037:(id)arg3 02509f7310305b8b34b2d0c80:(CDUnknownBlockType)arg4;
- (_Bool)_shouldLogPayloadGeneration;
- (id)ab2a3ca82a546be27:(id)arg1 7ae5:(id)arg2 9746d8f9c8:(id)arg3;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSURL *defaultBaseURL; // @synthesize defaultBaseURL=_defaultBaseURL;
- (void)enqueueHTTPRequestOperation:(id)arg1;
- (id)initWithBaseURL:(id)arg1;
- (_Bool)isCustomEndpoint;
@property(readonly, nonatomic) double loggingRate; // @synthesize loggingRate=_loggingRate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

