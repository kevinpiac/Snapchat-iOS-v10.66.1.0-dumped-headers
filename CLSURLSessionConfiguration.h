//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSURLCache;

@interface CLSURLSessionConfiguration : NSObject <NSCopying>
{
    NSDictionary *_additionalHeaders;
    NSURLCache *_URLCache;
    unsigned long long _cookiePolicy;
    _Bool _allowsCellularAccess;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
}

+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)defaultSessionConfiguration;
+ (id)ephemeralSessionConfiguration;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *HTTPAdditionalHeaders; // @synthesize HTTPAdditionalHeaders=_additionalHeaders;
@property(nonatomic) unsigned long long HTTPCookieAcceptPolicy; // @synthesize HTTPCookieAcceptPolicy=_cookiePolicy;
@property(retain, nonatomic) NSURLCache *URLCache; // @synthesize URLCache=_URLCache;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool sessionSendsLaunchEvents;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;

@end

