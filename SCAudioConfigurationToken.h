//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCAudioConfiguration;

@interface SCAudioConfigurationToken : NSObject <NSCopying>
{
    struct NSString *_token;
    SCAudioConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCAudioConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithToken:(struct NSString *)arg1 configuration:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;

@end

