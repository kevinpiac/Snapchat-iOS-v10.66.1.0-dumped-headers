//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandApprovalStatus-Protocol.h"

@class NSString, SOJUUnlockablesOndemandLineItemApprovalDetails;

@interface SOJUUnlockablesOndemandApprovalStatus : NSObject <SOJUUnlockablesOndemandApprovalStatus>
{
    NSString *_status;
    SOJUUnlockablesOndemandLineItemApprovalDetails *_rejectionDetails;
    SOJUUnlockablesOndemandLineItemApprovalDetails *_revocationDetails;
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
- (id)initWithStatus:(id)arg1 rejectionDetails:(id)arg2 revocationDetails:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandLineItemApprovalDetails *rejectionDetails; // @synthesize rejectionDetails=_rejectionDetails;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandLineItemApprovalDetails *revocationDetails; // @synthesize revocationDetails=_revocationDetails;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
- (long long)statusEnum;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

