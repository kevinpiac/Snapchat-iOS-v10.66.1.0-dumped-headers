//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandTaxRate-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandTaxRate : NSObject <SOJUUnlockablesOndemandTaxRate>
{
    NSString *_rate;
    NSNumber *_timestamp;
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
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithRate:(id)arg1 timestamp:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *rate; // @synthesize rate=_rate;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
- (long long)timestampValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

