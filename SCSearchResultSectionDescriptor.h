//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol NSCopying;

@interface SCSearchResultSectionDescriptor : NSObject <NSCopying>
{
    NSString *_type;
    NSString *_identifier;
    long long _displayPolicy;
    NSObject<NSCopying> *_configuration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *configuration; // @synthesize configuration=_configuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long displayPolicy; // @synthesize displayPolicy=_displayPolicy;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithType:(id)arg1 identifier:(id)arg2 displayPolicy:(long long)arg3 configuration:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;

@end

