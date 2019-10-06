//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString;

@interface BTClientMetadata : NSObject <NSCopying, NSMutableCopying>
{
    long long _integration;
    long long _source;
    NSString *_sessionId;
}

+ (id)integrationToString:(long long)arg1;
+ (id)sourceToString:(long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) long long integration; // @synthesize integration=_integration;
@property(readonly, copy, nonatomic) NSString *integrationString;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *sourceString;

@end

