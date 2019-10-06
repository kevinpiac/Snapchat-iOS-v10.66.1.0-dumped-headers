//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandBundleDiscountRef-Protocol.h"

@class NSString, SOJUUnlockablesOndemandMonetaryAmount, SOJUUnlockablesOndemandValidationError;

@interface SOJUUnlockablesOndemandBundleDiscountRef : NSObject <SOJUUnlockablesOndemandBundleDiscountRef>
{
    NSString *_bundleLineitemId;
    SOJUUnlockablesOndemandMonetaryAmount *_originalAmount;
    SOJUUnlockablesOndemandMonetaryAmount *_bundleDiscountAmount;
    NSString *_originalAmountProductId;
    SOJUUnlockablesOndemandValidationError *_error;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *bundleDiscountAmount; // @synthesize bundleDiscountAmount=_bundleDiscountAmount;
@property(readonly, copy, nonatomic) NSString *bundleLineitemId; // @synthesize bundleLineitemId=_bundleLineitemId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandValidationError *error; // @synthesize error=_error;
@property(readonly) unsigned long long hash;
- (id)initWithBundleLineitemId:(id)arg1 originalAmount:(id)arg2 bundleDiscountAmount:(id)arg3 originalAmountProductId:(id)arg4 error:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *originalAmount; // @synthesize originalAmount=_originalAmount;
@property(readonly, copy, nonatomic) NSString *originalAmountProductId; // @synthesize originalAmountProductId=_originalAmountProductId;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

