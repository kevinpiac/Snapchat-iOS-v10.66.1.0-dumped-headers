//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommunityLensData-Protocol.h"

@class NSString, SCLensCreator;

@interface SCCommunityLensData : NSObject <SCCommunityLensData>
{
    SCLensCreator *_lensCreator;
    NSString *_attributionName;
    NSString *_scannedData;
}

+ (id)communityLensDataWithGeofilterData:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *attributionName; // @synthesize attributionName=_attributionName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)displayUserName;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLensCreator:(id)arg1 attributionName:(id)arg2 scannedData:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCLensCreator *lensCreator; // @synthesize lensCreator=_lensCreator;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *scannedData; // @synthesize scannedData=_scannedData;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)snapScannedData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
