//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandInventoryRestrictionConflictValidationError-Protocol.h"

@class NSArray, NSString;

@interface SOJUUnlockablesOndemandInventoryRestrictionConflictValidationError : NSObject <SOJUUnlockablesOndemandInventoryRestrictionConflictValidationError>
{
    NSString *_messageTemplate;
    NSArray *_restrictions;
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
- (id)initWithMessageTemplate:(id)arg1 restrictions:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageTemplate; // @synthesize messageTemplate=_messageTemplate;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSArray *restrictions; // @synthesize restrictions=_restrictions;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

