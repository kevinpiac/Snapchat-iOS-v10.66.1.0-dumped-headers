//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJULensCategoryDatum-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJULensCategoryDatum : NSObject <SOJULensCategoryDatum>
{
    NSString *_idValue;
    NSString *_name;
    NSString *_activator;
    NSString *_config;
    NSString *_configChecksum;
    NSArray *_additionalCarouselCategories;
    NSNumber *_additionalCarouselLensesLimitDeprecated;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *activator; // @synthesize activator=_activator;
@property(readonly, copy, nonatomic) NSArray *additionalCarouselCategories; // @synthesize additionalCarouselCategories=_additionalCarouselCategories;
@property(readonly, copy, nonatomic) NSNumber *additionalCarouselLensesLimitDeprecated; // @synthesize additionalCarouselLensesLimitDeprecated=_additionalCarouselLensesLimitDeprecated;
- (int)additionalCarouselLensesLimitDeprecatedValue;
@property(readonly, copy, nonatomic) NSString *config; // @synthesize config=_config;
@property(readonly, copy, nonatomic) NSString *configChecksum; // @synthesize configChecksum=_configChecksum;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 name:(id)arg2 activator:(id)arg3 config:(id)arg4 configChecksum:(id)arg5 additionalCarouselCategories:(id)arg6 additionalCarouselLensesLimitDeprecated:(id)arg7;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

