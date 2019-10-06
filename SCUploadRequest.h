//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCRequest.h"

@class NSDictionary, NSMutableURLRequest, NSURL;

@interface SCUploadRequest : SCRequest
{
    NSDictionary *_parameters;
    NSDictionary *_additionalHTTPHeaders;
    NSMutableURLRequest *_urlRequest;
    NSURL *_url;
    NSURL *_uploadFileURL;
}

- (void).cxx_destruct;
- (unsigned long long)approximateRequestSize;
- (id)description;
- (void)executeWithAuthenticator:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 uploadFileURL:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestParser:(id)arg10 requestType:(long long)arg11 method:(long long)arg12 authenticated:(_Bool)arg13 requestTimestamp:(double)arg14 streamingId:(id)arg15 estimatedResponseSizeBytes:(long long)arg16;
- (void)initializeURLRequestWithAuthenticator:(id)arg1;
- (id)path;
- (double)timeoutInterval;
@property(readonly, nonatomic) NSURL *uploadFileURL; // @synthesize uploadFileURL=_uploadFileURL;
- (id)url;
- (id)urlRequest;

@end

