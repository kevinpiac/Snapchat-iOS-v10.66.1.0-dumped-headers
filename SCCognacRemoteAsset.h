//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSURL;

@interface SCCognacRemoteAsset : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSURL *_plainURL_url;
    NSDictionary *_plainURL_headers;
}

+ (id)plainURLWithUrl:(id)arg1 headers:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchPlainURL:(CDUnknownBlockType)arg1;

@end

