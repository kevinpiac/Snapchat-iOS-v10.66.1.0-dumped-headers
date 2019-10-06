//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandImageFilter-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandImageFilter : NSObject <SOJUUnlockablesOndemandImageFilter>
{
    NSString *_url;
    NSString *_format;
    NSNumber *_height;
    NSNumber *_width;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
- (int)heightValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUrl:(id)arg1 format:(id)arg2 height:(id)arg3 width:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
- (int)widthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

