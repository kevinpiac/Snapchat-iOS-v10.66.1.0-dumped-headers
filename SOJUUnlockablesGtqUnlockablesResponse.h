//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesGtqUnlockablesResponse-Protocol.h"

@class NSArray, NSString, SOJUAdOpportunityRequestIds;

@interface SOJUUnlockablesGtqUnlockablesResponse : NSObject <SOJUUnlockablesGtqUnlockablesResponse>
{
    NSArray *_filters;
    NSArray *_invalidFilterIds;
    NSArray *_bitmojiFilters;
    NSArray *_lenses;
    NSArray *_prefetchLenses;
    NSArray *_stickers;
    NSArray *_purposes;
    SOJUAdOpportunityRequestIds *_opportunityRequestIds;
    NSArray *_assetPrecachedFilters;
    NSArray *_previewCaptionStyles;
    NSArray *_checksumResponseList;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *assetPrecachedFilters; // @synthesize assetPrecachedFilters=_assetPrecachedFilters;
@property(readonly, copy, nonatomic) NSArray *bitmojiFilters; // @synthesize bitmojiFilters=_bitmojiFilters;
@property(readonly, copy, nonatomic) NSArray *checksumResponseList; // @synthesize checksumResponseList=_checksumResponseList;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilters:(id)arg1 invalidFilterIds:(id)arg2 bitmojiFilters:(id)arg3 lenses:(id)arg4 prefetchLenses:(id)arg5 stickers:(id)arg6 purposes:(id)arg7 opportunityRequestIds:(id)arg8 assetPrecachedFilters:(id)arg9 previewCaptionStyles:(id)arg10 checksumResponseList:(id)arg11;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *invalidFilterIds; // @synthesize invalidFilterIds=_invalidFilterIds;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *lenses; // @synthesize lenses=_lenses;
@property(readonly, copy, nonatomic) SOJUAdOpportunityRequestIds *opportunityRequestIds; // @synthesize opportunityRequestIds=_opportunityRequestIds;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSArray *prefetchLenses; // @synthesize prefetchLenses=_prefetchLenses;
@property(readonly, copy, nonatomic) NSArray *previewCaptionStyles; // @synthesize previewCaptionStyles=_previewCaptionStyles;
@property(readonly, copy, nonatomic) NSArray *purposes; // @synthesize purposes=_purposes;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

