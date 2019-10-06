//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SOJUBloopsBloopsConfig;

@interface SCBloopsRemoteSettingsModel : NSObject <NSCopying, NSCoding>
{
    NSString *_apiVersion;
    SOJUBloopsBloopsConfig *_sojuBloopsConfig;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithApiVersion:(id)arg1 sojuBloopsConfig:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUBloopsBloopsConfig *sojuBloopsConfig; // @synthesize sojuBloopsConfig=_sojuBloopsConfig;

@end

