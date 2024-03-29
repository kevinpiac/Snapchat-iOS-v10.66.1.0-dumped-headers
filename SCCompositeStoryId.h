//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCompositeStoryId : NSObject <NSCopying>
{
    unsigned int _corpus;
    NSString *_identifier;
    long long _version;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int corpus; // @synthesize corpus=_corpus;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 corpus:(unsigned int)arg2 version:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;

@end

