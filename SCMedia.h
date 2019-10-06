//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCMediaEndpointInfo;

@interface SCMedia : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    NSString *_url_mediaUrl;
    NSString *_url_mediaIV;
    NSString *_url_mediaKey;
    NSString *_endpoint_endpoint;
    NSArray *_endpoint_queryItems;
    SCMediaEndpointInfo *_endpoint_endpointInfo;
}

+ (id)endpointWithEndpoint:(id)arg1 queryItems:(id)arg2 endpointInfo:(id)arg3;
+ (id)urlWithMediaUrl:(id)arg1 mediaIV:(id)arg2 mediaKey:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchUrl:(CDUnknownBlockType)arg1 endpoint:(CDUnknownBlockType)arg2;

@end

