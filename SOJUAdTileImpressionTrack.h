//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdTileImpressionTrack-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdTileImpressionTrack : NSObject <SOJUAdTileImpressionTrack>
{
    NSNumber *_isViewed;
    NSNumber *_isViewedAppSession;
    NSNumber *_tileTapped;
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
- (id)initWithIsViewed:(id)arg1 isViewedAppSession:(id)arg2 tileTapped:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isViewed; // @synthesize isViewed=_isViewed;
@property(readonly, copy, nonatomic) NSNumber *isViewedAppSession; // @synthesize isViewedAppSession=_isViewedAppSession;
- (_Bool)isViewedAppSessionValue;
- (_Bool)isViewedValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *tileTapped; // @synthesize tileTapped=_tileTapped;
- (_Bool)tileTappedValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

